// objective: test the \example command
// check: example_test_8cpp-example.xml
// check: class_test.xml
// config: EXAMPLE_PATH = .

/** \brief A Test class.
 *
 *  More details about this class.
 */
class Test
{
  public:
    /** \brief An example member function.
     *
     *  More details about this function.
     */
    void example();

  private:
    int member;		///< a data-member.
    int member2;	//< another data-member.
};

void Test::example() {}

/** \example example_test.cpp
 * This is an example of how to use the Test class.
 *
 * More details about this example.
 */
