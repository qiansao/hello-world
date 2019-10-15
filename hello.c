#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *curl ;
  CURLcode res;
  
  curl=curl_ easy_ init();
  if(curl){
  
curl_ easy_ _setopt(curl, CURLOPT_URL, "http://myip. ipip.net/");
    res=curl_ easy_ perform(curl);
    if(res!=CURLE_ OK)
    fprintf(stderr,"curl_easy_perform() failed:%s\n",curl_easy_strerror(res));
    curl_easy_cleanup(curl);
}
return 0;
}

