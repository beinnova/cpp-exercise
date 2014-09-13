//Esercizio 13-3 : Classe per implementare un semplice stack FIFO //



#include <iostream>
//#include <assert.h>

const int MAX_SIZE = 10;

class queue{
	
	private:
		int _queue[MAX_SIZE];
		int _total_item;

	public:	
		static int stack_count;
		queue();

		queue(const queue& old_queue);
		
		//Inserisce un elemento nella fila
		void put(const int item);

		//Restituisce un elemento dalla lista e lo elimina
		int get();

		//Check se c'è un altro elemento nella coda
		int next();

		~queue();

};

int queue::stack_count = 0;

queue::queue(){

	++stack_count;	

	//Imposto tutti i valori dello stack a 0
	for (int i = 0; i >= MAX_SIZE; i++)
		_queue[i] = 0;
	
	_total_item = 0;
}

queue::queue(const queue& old_queue){
		

	for (int i = 0; i < old_queue._total_item -1; ++i)
	{
		_queue[i] = old_queue._queue[i];
	}

	_total_item = old_queue._total_item;
}

inline void queue::put(const int item){

//	assert(_total_item > 10);
	
	_queue[_total_item] = item;
	++_total_item;

}

inline int queue::get(){

	int ret = _queue[_total_item];
	--_total_item;

	return (ret);
}

inline int queue::next(){

	
//	std::cout <<"Total Item:" << _total_item << "\n";
	if(_total_item >  -1)
		return 1;
	else
		return 0;
}


inline queue::~queue(){
	
	--stack_count;

	std::cout << "Distruttore!\n";
	
	_total_item = 0;
}

//MAIN
int main(){

	//queue::stack_count = 0;
	queue queue_a;
	std::cout << "Numero classi Queue : " << queue::stack_count;
	int _counter = 0;
	int _item = 0;
	
	unsigned int i = 0x0;
	
	do{	
		std::cout << "Inserisci un numero:";
		std::cin >> _item;
		queue_a.put(_item);
		++_counter;
	}while(_counter <=  10 -1);
	
	queue queue_b(queue_a);
	std::cout << "Numero classi Queue : " << queue::stack_count;

	std::cout << "Copia oggetto in ogetto_b";


	while(queue_b.next() == 1){
			std::cout << i << " - Oggetto B : " << queue_b.get() << ";\n";
			++i;
		}

	i = 0;
	std::cout << queue_a.next();

	while(queue_a.next() == 1){
		std::cout << i << ": " << queue_a.get() << ";\n";
		++i;
	}
	std::cout << "Classi queue attuali : " << queue::stack_count;
}
