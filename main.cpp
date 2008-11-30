#include <iostream>
#include <string>
#include <curl/curl.h>
using namespace std;

static size_t download(void *buffer, size_t size, size_t nmemb, void *userp){

}


int main(){

	CURL *curl;
	CURLcode result;

	curl_global_init(CURL_GLOBAL_DEFAULT);

	curl = curl_easy_init();
	if(curl){
		curl_easy_setopt(curl, CURLOPT_URL, "http://www.google.com");
		result = curl_easy_perform(curl);
		
		if(result != CURLE_OK)
			cout<<endl<<"Error!"<<endl;

		curl_easy_cleanup(curl);
	}

	return 0;
}

	
