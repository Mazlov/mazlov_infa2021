Cat* get_home_for_a_cats_pride(unsigned int n) {
  Cat* cats = new Cat[n];
  for (int i = 0; i < n; i++) {
    char* name = new char[10];
    cats[i].name = name;
  }
  return cats;
}
void clear_home_of_a_cats_pride(Cat *cats, unsigned int n) {
  for (int i = 0; i < n; i++)
    delete [] cats[i].name;
  delete [] cats;
}
