int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    for (int i = 0; i < m; i++)
    {
        int index;
        int tar = v2[i];
        int left = 0;
        int right = v1.size();
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (tar < v1[mid])
            {
                if (tar < v1[mid] && tar >= v1[mid - 1])
                {
                    index = mid;
                    break;
                }
                else
                {
                    left = mid + 1;
                }
            }
            else if (tar > v1[mid])
            {
                if (tar >= v1[mid] && tar < v1[mid + 1])
                {
                    index = mid + 1;
                    break;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }
        cout << index << "\n";
    }