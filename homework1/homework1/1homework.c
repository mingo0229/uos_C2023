<<<<<<< HEAD
#include <stdio.h> //printf 함수가 들어있는 stdio 헤더 불러오기

//2020580003 통계학과 김민섭 C프로그래밍 과제1
=======
#include <stdio.h> //printf �븿�닔媛� �뱾�뼱�엳�뒗 stdio �뿤�뜑 遺덈윭�삤湲�
//2020580003 �넻怨꾪븰怨� 源�誘쇱꽠
>>>>>>> a3e8003b56bd4a021e13ce64446a4033d12c008b
int main(void) {

	char name[20], class[30];
	/*
	�씠由꾧낵 �븰怨쇰뒗 �븳湲�濡� �엯�젰�븷 寃껋씤�뜲 �븳湲���� �븳 �쓬�젅 �떦 2諛붿씠�듃�뵫�씠誘�濡�
	�븘�옄�뒗 �넻怨꾪븰怨쇰씪�꽌 8諛붿씠�듃濡� 異⑸텇�븯吏�留� �꽌�슱�떆由쎈���븰援먯뿉�꽌 媛��옣 湲� �븰怨쇰챸�씤
	�쟾湲곗쟾�옄而댄벂�꽣怨듯븰遺�(珥� 10湲��옄)瑜� �쐞�빐 �꼮�꼮�옟�븘 30諛붿씠�듃源뚯�� �뿀�슜
	�씠由꾩�� �븳援��씤 湲곗�� �븘臾대━ 湲몄뼱遊ㅼ옄 20諛붿씠�듃硫� 異⑸텇�븯�떎怨� �깮媛�
	�삉�븳 �씠由꾧낵 �븰怨쇰뒗 媛숈�� �옄猷뚰삎�씤 臾몄옄�뿴 char[]�씠誘�濡� �븳爰쇰쾲�뿉 泥섎━
	�뜲�씠�꽣 媛믪쓣 蹂��닔�뿉 誘몃━ �젙�쓽�븯吏� �븡怨� �궗�슜�옄濡쒕���꽣 �엯�젰諛쏆쑝�젮�븿
	*/
	int code, birth;
	// �씠 �뿭�떆 �븰踰덇낵 �깮�뀈�썡�씪�쓽 �엯�젰��� �젙�닔�삎�쑝濡� 媛숈�� �옄猷뚰삎�씠誘�濡� �븳爰쇰쾲�뿉 泥섎━

	printf("�씠由� �엯�젰 : ");
	/*
	printf �븿�닔瑜� �씠�슜�빐 �씠由� �엯�젰 : �쓣 留뚮뱾怨� �씠�썑 scanf �븿�닔瑜� �씠�슜�븷 寃�, �떎�쓬 以꾩뿉 �굹�샂
	*/
	scanf_s("%s", name, sizeof(name));
	/*
	scanf �븿�닔瑜� �씠�슜�빐 誘몃━ �엯�젰�븯吏� �븡怨� �궗�슜�옄�뿉寃� 吏곸젒 蹂��닔瑜� �엯�젰諛쏆쓣 �닔 �엳�쓬
	臾몄옄�뿴�씠誘�濡� %s濡� name�쓽 蹂��닔瑜� 諛쏆쓬
	scanf_s�뒗 �삉�븳 ����옣�냼�쓽 �겕湲곕�� 異붽��濡� �쟾�떖�빐二쇱뼱�빞 �븯誘�濡� sizeof(name)源뚯�� �엯�젰�빐以�
	*/
	printf("�깮�뀈�썡�씪(8媛� �닽�옄) �엯�젰 : ");
	/*
	留덉갔媛�吏��쓽 諛⑸쾿�씠吏�留� 2000�뀈 2�썡 29�씪 怨� 媛숈씠 �닽�옄��� �븳湲��쓣 媛숈씠 �벐硫�
	�젙�닔�삎�쑝濡� 泥섎━�븳 �옄猷뚰삎 int�뿉 �뼱湲뗫굹誘�濡� 8媛쒖쓽 �닽�옄留� �씠�슜�븯�씪怨� 紐낆떆
	*/
	scanf_s("%d", &birth);
	/*
	scanf_s �븿�닔瑜� �씠�슜�빐 �궗�슜�옄�뿉寃� 吏곸젒 蹂��닔瑜� �엯�젰諛쏆쓣 寃껋씠吏�留� �젙�닔�삎�씠誘�濡�
	�깮�씪 蹂��닔瑜� %d濡� 諛쏆쓬
	*/
	printf("�븰踰� �엯�젰 : ");
	scanf_s("%d", &code);
	// �깮�뀈�썡�씪 �엯�젰怨� 留덉갔媛�吏��쓽 諛⑸쾿
	printf("�븰怨쇰챸 �엯�젰 : ");
	scanf_s("%s", class, sizeof(class));
	// �씠由� �엯�젰怨� 留덉갔媛�吏��쓽 諛⑸쾿

	printf("\n�씠由� : %s\n", name);
	/*
	�엯�젰諛쏆�� 蹂��닔媛믪쓣 printf�븿�닔濡� 諛쏆븘�꽌 留덉갔媛�吏�濡� 臾몄옄�뿴 %s濡� 諛쏆븘�꽌 異쒕젰
	*/
	printf("�깮�뀈�썡�씪 : %d\n", birth); //留덉갔媛�吏�吏�留� �젙�닔�삎�쑝濡� 諛쏆븯�쑝誘�濡� %d濡� 諛쏆븘 異쒕젰
	printf("�븰踰� : %d\n", code);
	printf("�븰怨쇰챸 : %s", class);

}
