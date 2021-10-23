#include <stdio.h>
#include <curl/curl.h>
 
int main(void)
{
  char myUrl[300];
  printf("please input url:");
  scanf("%s", myUrl);

  for(int i = 0; i <2000; i ++) {
     
     printf("------------%d------------\n", i);


     CURL *curl;
     CURLcode res;
 
     curl = curl_easy_init();
     if(curl) {
       curl_easy_setopt(curl, CURLOPT_URL, myUrl);
       res = curl_easy_perform(curl);
 
       if(CURLE_OK == res) {
         char *ct;
         /* ask for the content-type */
         res = curl_easy_getinfo(curl, CURLINFO_CONTENT_TYPE, &ct);
 
        if((CURLE_OK == res) && ct)
          printf("We received Content-Type: %s\n", ct);
        }
 
      /* always cleanup */
      curl_easy_cleanup(curl);
    }
   
  }

  return 0;
}
