#include <time.h>

int main()
{
    time_t time(time_t* t);
    Diary* diary = create_diary();

    //3回つぶやく
    add_tweet(diary, "Hello, World!");
    add_tweet(diary, "My second tweet!");
    add_tweet(diary, "My third tweet!");

    //2番目のツイートを削除
    Tweet* tw = get_tweet(diary, 1);
    remove_tweet(diary, tw);

    //もう一度つぶやく
    add_tweet(diary, "My last tweet!");

    //すべての投稿を表示
    print_tweets(diary);

    return 0;
}

//日記1つの記事の"型"は以下のように表現できる
typedef struct {
    time_t ts;  //投稿日時のタイムスタンプ
    char msg[280+1]; //メッセージ
} Tweet;

//日記全体はTweet型の値のリストとして表現できる。
typedef struct {

} Diary;