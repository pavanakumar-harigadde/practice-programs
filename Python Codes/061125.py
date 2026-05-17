{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 1,
   "id": "b3f9916a-5509-449f-8f53-0abd5456386c",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "hoii\n"
     ]
    }
   ],
   "source": [
    "print(\"hoii\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 3,
   "id": "1508b84b-7353-4b5b-b0d9-aafd6104956b",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Greater than 5\n"
     ]
    }
   ],
   "source": [
    "x=10\n",
    "if x>5:\n",
    "    print(\"Greater than 5\")\n",
    "elif x>8:\n",
    "    print(\"Greater than 8\")\n",
    "else:\n",
    "    print(\"Greater than 0r equal to 5\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 4,
   "id": "491b75a8-a1fc-4ca7-97ce-02b1cb15ca51",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Greater than 5\n"
     ]
    }
   ],
   "source": [
    "x=10\n",
    "if x>5:\n",
    "    print(\"Greater than 5\")\n",
    "elif x>8:\n",
    "    print(\"Greater than 8\")\n",
    "else:\n",
    "    print(\"Greater than 0r equal to 5\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 5,
   "id": "7db0bfab-17f3-4808-8142-8f46e0d65796",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "0\n",
      "1\n",
      "2\n",
      "4\n"
     ]
    }
   ],
   "source": [
    "for i in range(5):\n",
    "    if i==3:\n",
    "        continue\n",
    "    print(i)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 6,
   "id": "d4abcdd6-4c0c-48be-bf26-65f20f06a5c5",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "1\n",
      "2\n",
      "4\n"
     ]
    }
   ],
   "source": [
    "if 'bar' in{'foo':1,'bar':2,'baz':3}:\n",
    "    print(1)\n",
    "    print(2)\n",
    "    if 'a' in 'qux':\n",
    "        print(3)\n",
    "    print(4)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 8,
   "id": "368ecbef-3d04-4a2f-8d6a-e148061978b4",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "ok\n"
     ]
    }
   ],
   "source": [
    "d={'a':0,'b':1,'c':0}\n",
    "if d['a']>0:print('ok')\n",
    "elif d['b']>0:print('ok')\n",
    "elif d['c']>0:print('ok')\n",
    "elif d['d']>0:print('ok')\n",
    "else: print('not ok')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 9,
   "id": "4732a20a-c7ed-45a7-ad3a-10ce880f355d",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "-2,-3,-4,"
     ]
    }
   ],
   "source": [
    "for num in range(-2,-5,-1):\n",
    "    print(num,end=\",\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 10,
   "id": "1f033fa6-1f5e-4e52-b8b5-fd7a007ce4e8",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "J,h,o,n,"
     ]
    }
   ],
   "source": [
    "for l in 'Jhon':\n",
    "    if l=='o':\n",
    "        pass\n",
    "    print(l,end=',')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 11,
   "id": "80e8f04c-a68e-4f8d-864a-e62e2b570e07",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "2\n"
     ]
    }
   ],
   "source": [
    "x=0;a=0;b=-5\n",
    "if a>0:\n",
    "    if b<0:x=x+5\n",
    "    elif a>5:x=x+4\n",
    "    else: x=x+3\n",
    "else:x=x+2\n",
    "print(x)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 12,
   "id": "c810a4b5-85b7-4348-ab58-3084967dbe17",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "21\n"
     ]
    }
   ],
   "source": [
    "var=10\n",
    "for i in range(10):\n",
    "    for j in range (2,10,1):\n",
    "        if var%2==0:\n",
    "            continue;var+=1\n",
    "    var+=1\n",
    "else:var+=1\n",
    "print(var)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 13,
   "id": "c6abb6e9-3b0d-4c4c-8c54-8970b1451e43",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "2,1,0,-1,-2,-3,-4,"
     ]
    }
   ],
   "source": [
    "for num in range(2,-5,-1):\n",
    "    print(num,end=\",\")\n"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 14,
   "id": "fe02e9cf-d104-46ee-901d-e547f548a503",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "1\n",
      "2\n",
      "3\n",
      "4\n",
      "5\n",
      "6\n",
      "7\n",
      "8\n",
      "9\n",
      "10\n",
      "11\n",
      "12\n",
      "13\n",
      "14\n",
      "15\n",
      "16\n",
      "17\n",
      "18\n",
      "19\n",
      "20\n",
      "21\n",
      "22\n",
      "23\n",
      "24\n",
      "25\n",
      "26\n",
      "27\n",
      "28\n",
      "29\n",
      "30\n",
      "31\n",
      "32\n",
      "33\n",
      "34\n",
      "35\n",
      "36\n",
      "37\n",
      "38\n",
      "39\n",
      "40\n",
      "41\n",
      "42\n",
      "43\n",
      "44\n",
      "45\n",
      "46\n",
      "47\n",
      "48\n",
      "49\n",
      "50\n",
      "51\n",
      "52\n",
      "53\n",
      "54\n",
      "55\n",
      "56\n",
      "57\n",
      "58\n",
      "59\n",
      "60\n",
      "61\n",
      "62\n",
      "63\n",
      "64\n",
      "65\n",
      "66\n",
      "67\n",
      "68\n",
      "69\n",
      "70\n",
      "71\n",
      "72\n",
      "73\n",
      "74\n",
      "75\n",
      "76\n",
      "77\n",
      "78\n",
      "79\n",
      "80\n",
      "81\n",
      "82\n",
      "83\n",
      "84\n",
      "85\n",
      "86\n",
      "87\n",
      "88\n",
      "89\n",
      "90\n"
     ]
    }
   ],
   "source": [
    "x=0\n",
    "for i in range(10):\n",
    "    for j in range(-1,-10,-1):\n",
    "        x+=1;print(x)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 15,
   "id": "609129bb-f164-46b0-9eec-b3fdff998641",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "True\n"
     ]
    }
   ],
   "source": [
    "a,b=12,5\n",
    "if a+b:\n",
    "    print('True')\n",
    "else:\n",
    "    print('False')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 10,
   "id": "5df96c66-3e05-4577-bc3e-af6335da96fe",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "100\n"
     ]
    }
   ],
   "source": [
    "x=0\n",
    "while(x<100):\n",
    "    x+=2\n",
    "print(x)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 9,
   "id": "bfb34ced-81b8-403d-95e2-15909fdfc088",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "10 10\n",
      "10 20\n",
      "20 10\n",
      "20 20\n"
     ]
    }
   ],
   "source": [
    "numbers=[10,20]\n",
    "items=[\"Chairs\",\"Table\"]\n",
    "for x in numbers:\n",
    "    for y in numbers:\n",
    "        print(x,y)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "68acc395-e25e-4800-b846-b8cb54272c1d",
   "metadata": {},
   "outputs": [],
   "source": [
    "print(\"hii\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "82ebbb99-e72b-4855-a93e-1585ba65559c",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": 8,
   "id": "b7bb8aa3-0811-497f-a959-387ee6d7f5d2",
   "metadata": {},
   "outputs": [
    {
     "name": "stdin",
     "output_type": "stream",
     "text": [
      "Enter a number: 5\n"
     ]
    },
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Factorial of the number a : 120\n"
     ]
    }
   ],
   "source": [
    "#Write a program to find a factorial number\n",
    "a=int(input(\"Enter a number:\"))\n",
    "fact=1\n",
    "for i in range(1,a+1):\n",
    "    fact=i*fact\n",
    "print(\"Factorial of the number a :\",fact)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 12,
   "id": "f125ce2f-db77-43b9-aaf9-55019f2045b3",
   "metadata": {},
   "outputs": [
    {
     "name": "stdin",
     "output_type": "stream",
     "text": [
      "Enter a number: 5\n"
     ]
    },
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Factorial of the number a : 120\n"
     ]
    }
   ],
   "source": [
    "#Write a program to find a factorial number\n",
    "a=int(input(\"Enter a number:\"))\n",
    "fact=1\n",
    "\n",
    "if a<0:\n",
    "    print(\"Please enter a positive number\")\n",
    "elif a==0:\n",
    "    print(\"The factorial of 0 is 1\")\n",
    "\n",
    "else:\n",
    "    for i in range(1,a+1):\n",
    "        fact=i*fact\n",
    "print(\"Factorial of the number a :\",fact)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 15,
   "id": "b43e02f9-c06b-42a8-8ff9-4c480f6b129e",
   "metadata": {},
   "outputs": [
    {
     "name": "stdin",
     "output_type": "stream",
     "text": [
      "Enter the first number: 12\n",
      "Enter second number: 18\n"
     ]
    },
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "The GCD of 12 and 18 is 6\n"
     ]
    }
   ],
   "source": [
    "#Write a program to find the GCD of two numbers\n",
    "x=int(input(\"Enter the first number:\"))\n",
    "y=int(input(\"Enter second number:\"))\n",
    "if x<y:\n",
    "    smaller=x\n",
    "else:\n",
    "    smaller=y\n",
    "for i in range(1,smaller+1):\n",
    "    if (x%i==0)and(y%i==0):\n",
    "        gcd=i\n",
    "print(\"The GCD of\",x,\"and\",y,\"is\",gcd)\n"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "bbfb8e9e-50a4-44fc-b56d-668eabd11c75",
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3 (ipykernel)",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.12.4"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}
