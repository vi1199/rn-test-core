import React from 'react';
import {SafeAreaView} from 'react-native';
import {SafeAreaViewProps} from 'react-native-safe-area-context';

export const VView = ({children, ...args}: SafeAreaViewProps) => {
  return <SafeAreaView {...args}>{children}</SafeAreaView>;
};
