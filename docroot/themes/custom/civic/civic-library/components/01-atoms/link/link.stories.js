import { text, boolean, radios } from '@storybook/addon-knobs'

import CivicLink from './link.twig'
import './link.scss'

export default {
  title: 'Atom/Link',
}

export const Link = () => CivicLink({
  theme: radios(
    'Theme',
    {
      'Light': 'light',
      'Dark': 'dark',
    },
    'light',
  ),
  text: text('Text', 'Link Text'),
  url: text('URL', 'https://www.example.com'),
  new_window: boolean('Open in a new window', false),
  is_external: boolean('Link is external', false)
})