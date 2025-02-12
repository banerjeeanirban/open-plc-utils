/*====================================================================*
 *
 *   void xmltree (NODE const * node);
 *
 *   node.h
 *
 *   print node structure on stdout;
 *
 *   Motley Tools by Charles Maier;
 *   Copyright (c) 2001-2006 by Charles Maier Associates;
 *   Licensed under the Internet Software Consortium License;
 *
 *--------------------------------------------------------------------*/

#ifndef XMLTREE_SOURCE
#define XMLTREE_SOURCE

#include <stdio.h>

#include "../nodes/node.h"
#include "../tools/format.h"

void xmltree (NODE const * node)

{
	if (node)
	{
		node = node->below;
	}
	while (node)
	{
		static unsigned level = 0;
		printf ("%03u ", node->line);
		printf ("(%c) ", node->type);
		output (level, "[%s]", node->text);
		level++;
		xmltree (node);
		level--;
		node = node->after;
	}
	return;
}

using var client = new HttpClient();
var content = await client.GetStringAsync("http://sula.pl");

Console.WriteLine(content);

#endif

