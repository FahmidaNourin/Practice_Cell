template <class ItemType>
SortedList<ItemType>::SortedList() {
length = 0;
currentPos = -1;
}

template <class ItemType>
bool SortedList<ItemType>::InsertItem(ItemType item) {
if(IsFull()){
return false;
}

int location = 0;
while (location < length){
if(info [location] <= item){
location++;
}
else
break;
}

for(int index = length; index>location; index--){
info[index] = info[index-1];
}

info[location] = item;

length++;
return true;
}

template <class ItemType>
bool SortedList<ItemType>::RetrieveItem(ItemType& item) {

int first = 0, last = length-1, midPoint;

while(first<=last){
midPoint = (first+last)/2;

if(item < info[midPoint]){
last = midPoint - 1;
}
else if(item > info[midPoint]){
first = midPoint + 1;
}
else{
item = info[midPoint];
return true;
}
}

return false;
}

template <class ItemType>
bool SortedList<ItemType>::DeleteItem(ItemType item) {
/*int location = 0;
while (location < length){
if (info[location] == item){
break;
}
location++;
}

if(location == length){
return false;
}

*/

bool found = false;

int first = 0, last = length-1, midPoint;

while(first<=last){
midPoint = (first+last)/2;

if(item < info[midPoint]){
last = midPoint - 1;
}
else if(item > info[midPoint]){
first = midPoint + 1;
}
else{
//item = info[midPoint];
found = true;
break;
}
}

if(found == false)
return false;

//for (int index = location; index <length-1; index++){ // for normal search
for (int index = midPoint; index <length-1; index++){ // for binary search
info[index] = info[index+1];
}
length--;
return true;
}

template <class ItemType>
bool SortedList<ItemType>::GetNextItem(ItemType& item) {
currentPos++;
//std::cout<<"CP: " << currentPos <<std::endl;
if(currentPos >= length){
return false;
}
item = info[currentPos];
return true;
}

template <class ItemType>
void SortedList<ItemType>::ResetList() {
currentPos = -1;
}

template <class ItemType>
bool SortedList<ItemType>::IsFull() {
//return (length == MAX_ITEMS);
if(length == MAX_ITEMS)
return true;
else
return false;
}

template <class ItemType>
void SortedList<ItemType>::MakeEmpty() {
length = 0;
currentPos = -1;
}

template<class ItemType>
int SortedList<ItemType>::GetLength() {
return length;
}
