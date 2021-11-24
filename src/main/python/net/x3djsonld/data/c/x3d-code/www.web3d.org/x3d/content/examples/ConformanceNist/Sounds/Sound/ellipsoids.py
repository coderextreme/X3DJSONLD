###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ellipsoids.x3d',name='title'),
    meta(content='ellipsoids-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test multiple ellipsoids. The fields minBack, minFront, maxBack and maxFront are set to create a typical elongated inner and outer ellipsoid for a Sound node. As a result, a differential distance between inner and outer ellipsoids exists as one moves between the two. Viewpoints are set up along the X, Y and Z axes to test sound levels outside, between and inside ellipsoids. Text at the bottom of the world indicates what the expected sound volume should be for each Viewpoint.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/ellipsoids.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ellipsoids.x3d'),
    Viewpoint(DEF='OUTSIDEMAXFRONT',description='FRONT: Outside maxFront (no sound)',position=(0,0,140)),
    Viewpoint(DEF='JUSTOUTSIDEMAXFRONT',description='Just outside maxFront (no sound)',position=(0,0,90.1)),
    Viewpoint(DEF='JUSTINSIDEMAXFRONT',description='Just inside maxFront (max sound -20dB)',position=(0,0,80)),
    Viewpoint(DEF='BETWEENFRONT',description='Midway between maxFront and minFront, (max sound -10dB)',position=(0,0,49.5)),
    Viewpoint(DEF='MINFRONT',description='At minFront, (max sound volume)',position=(0,0,9)),
    Viewpoint(DEF='MINCENTERFRONT',description='Center of min ellipsoid, (max sound volume)',position=(0,0,4)),
    Viewpoint(DEF='OUTSIDEMAXRIGHT',description='RIGHT: Outside max ellipsoid, (no sound)',orientation=(0,1,0,1.57),position=(140,0,0)),
    Viewpoint(DEF='JUSTOUTSIDEMAXRIGHT',description='Just outside max ellipsoid, (no sound)',orientation=(0,1,0,1.57),position=(18.1,0,0)),
    Viewpoint(DEF='JUSTINSIDEMAXRIGHT',description='Just inside max ellipsoid, (max sound -20dB)',orientation=(0,1,0,1.57),position=(17,0,0)),
    Viewpoint(DEF='BETWEENRIGHT',description='Midway between ellipsoids (max sound -10dB)',orientation=(0,1,0,1.57),position=(9.9,0,0)),
    Viewpoint(DEF='MINRIGHT',description='At min ellipsoid (max sound)',orientation=(0,1,0,1.57),position=(1.8,0,0)),
    Viewpoint(DEF='MINCENTERRIGHT',description='At ellipsoid focus, (max sound volume)',orientation=(0,1,0,1.57),position=(0,0,0)),
    Viewpoint(DEF='OUTSIDEMAXREAR',description='REAR: Outside maxBack (no sound)',orientation=(0,1,0,3.14),position=(0,0,-140)),
    Viewpoint(DEF='JUSTOUTSIDEMAXREAR',description='Just outside maxBack (no sound)',orientation=(0,1,0,3.14),position=(0,0,-10.1)),
    Viewpoint(DEF='JUSTINSIDEMAXREAR',description='Just inside maxBack (max sound -20dB)',orientation=(0,1,0,3.14),position=(0,0,-9.5)),
    Viewpoint(DEF='BETWEENREAR',description='Midway between maxBack and minBack, (max sound -10dB)',orientation=(0,1,0,3.14),position=(0,0,-5.5)),
    Viewpoint(DEF='MINREAR',description='At minBack, (max sound volume)',orientation=(0,1,0,3.14),position=(0,0,-1)),
    Viewpoint(DEF='MINCENTERREAR',description='Center of min ellipsoid, (max sound volume)',orientation=(0,1,0,3.14),position=(0,0,0)),
    Viewpoint(DEF='OUTSIDEMAXLEFT',description='LEFT: Outside max ellipsoid, (no sound)',orientation=(0,1,0,-1.57),position=(-140,0,0)),
    Viewpoint(DEF='JUSTOUTSIDEMAXLEFT',description='Just outside max ellipsoid, (no sound)',orientation=(0,1,0,-1.57),position=(-18.1,0,0)),
    Viewpoint(DEF='JUSTINSIDEMAXLEFT',description='Just inside max ellipsoid, (max sound -20dB)',orientation=(0,1,0,-1.57),position=(-17,0,0)),
    Viewpoint(DEF='BETWEENLEFT',description='Midway between ellipsoids (max sound -10dB)',orientation=(0,1,0,-1.57),position=(-9.9,0,0)),
    Viewpoint(DEF='MINLEFT',description='At min ellipsoid (max sound)',orientation=(0,1,0,-1.57),position=(-1.8,0,0)),
    Viewpoint(DEF='MINCENTERLEFT',description='At ellipsoid focus, (max sound volume)',orientation=(0,1,0,-1.57),position=(0,0,0)),
    Viewpoint(DEF='OUTSIDEMAXTOP',description='TOP: Outside max ellipsoid, (no sound)',orientation=(1,0,0,-1.57),position=(0,140,0)),
    Viewpoint(DEF='JUSTOUTSIDEMAXTOP',description='Just outside max ellipsoid, (no sound)',orientation=(1,0,0,-1.57),position=(0,18.1,0)),
    Viewpoint(DEF='JUSTINSIDEMAXTOP',description='Just inside max ellipsoid, (max sound -20dB)',orientation=(1,0,0,-1.57),position=(0,17,0)),
    Viewpoint(DEF='BETWEENTOP',description='Midway between ellipsoids (max sound -10dB)',orientation=(1,0,0,-1.57),position=(0,9.9,0)),
    Viewpoint(DEF='MINTOP',description='At min ellipsoid (max sound)',orientation=(1,0,0,-1.57),position=(0,1.8,0)),
    Viewpoint(DEF='MINCENTERTOP',description='At ellipsoid focus, (max sound volume)',orientation=(1,0,0,-1.57),position=(0,0,0)),
    Viewpoint(DEF='OUTSIDEMAXBOTTOM',description='BOTTOM: Outside max ellipsoid, (no sound)',orientation=(1,0,0,1.57),position=(0,-140,0)),
    Viewpoint(DEF='JUSTOUTSIDEMAXBOTTOM',description='Just outside max ellipsoid, (no sound)',orientation=(1,0,0,1.57),position=(0,-18.1,0)),
    Viewpoint(DEF='JUSTINSIDEMAXBOTTOM',description='Just inside max ellipsoid, (max sound -20dB)',orientation=(1,0,0,1.57),position=(0,-17,0)),
    Viewpoint(DEF='BETWEENBOTTOM',description='Midway between ellipsoids (max sound -10dB)',orientation=(1,0,0,1.57),position=(0,-9.9,0)),
    Viewpoint(DEF='MINBOTTOM',description='At min ellipsoid (max sound)',orientation=(1,0,0,1.57),position=(0,-1.8,0)),
    Viewpoint(DEF='MINCENTERBOTTOM',description='At ellipsoid focus, (max sound volume)',orientation=(1,0,0,1.57),position=(0,0,0)),
    Transform(
      children=[
      Sound(DEF='MYSOUND',maxFront=90,minFront=9,
        source=AudioClip(description='chimes',loop=True,url=["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]))]),
    Transform(DEF='TRANS2',
      children=[
      Transform(scale=(3,3,5),translation=(0,0,4),
        children=[
        Transform(DEF='MINELLIPSOID',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1],
              coord=Coordinate(point=[(1,0,0),(0.970142,0.242536,0),(0.970142,0,0.242536),(0.904534,0.301511,0.301511),(0.83205,0,0.5547),(0.666667,0.333333,0.666667),(0.5547,0,0.83205),(0.301511,0.301511,0.904534),(0.242536,0,0.970142),(0,0.242536,0.970142),(0,0,1),(0.83205,0.5547,0),(0.666667,0.666667,0.333333),(0.333333,0.666667,0.666667),(0,0.5547,0.83205),(0.5547,0.83205,0),(0.301511,0.904534,0.301511),(0,0.83205,0.5547),(0.242536,0.970142,0),(0,0.970142,0.242536),(0,1,0),(-0.242536,0,0.970142),(-0.301511,0.301511,0.904534),(-0.5547,0,0.83205),(-0.666667,0.333333,0.666667),(-0.83205,0,0.5547),(-0.904534,0.301511,0.301511),(-0.970142,0,0.242536),(-0.970142,0.242536,0),(-1,0,0),(-0.333333,0.666667,0.666667),(-0.666667,0.666667,0.333333),(-0.83205,0.5547,0),(-0.301511,0.904534,0.301511),(-0.5547,0.83205,0),(-0.242536,0.970142,0),(0,-0.242536,0.970142),(0.301511,-0.301511,0.904534),(0.666667,-0.333333,0.666667),(0.904534,-0.301511,0.301511),(0.970142,-0.242536,0),(0,-0.5547,0.83205),(0.333333,-0.666667,0.666667),(0.666667,-0.666667,0.333333),(0.83205,-0.5547,0),(0,-0.83205,0.5547),(0.301511,-0.904534,0.301511),(0.5547,-0.83205,0),(0,-0.970142,0.242536),(0.242536,-0.970142,0),(0,-1,0),(-0.970142,-0.242536,0),(-0.904534,-0.301511,0.301511),(-0.666667,-0.333333,0.666667),(-0.301511,-0.301511,0.904534),(-0.83205,-0.5547,0),(-0.666667,-0.666667,0.333333),(-0.333333,-0.666667,0.666667),(-0.5547,-0.83205,0),(-0.301511,-0.904534,0.301511),(-0.242536,-0.970142,0),(0,0,-1),(0,0.242536,-0.970142),(0.242536,0,-0.970142),(0.301511,0.301511,-0.904534),(0.5547,0,-0.83205),(0.666667,0.333333,-0.666667),(0.83205,0,-0.5547),(0.904534,0.301511,-0.301511),(0.970142,0,-0.242536),(0,0.5547,-0.83205),(0.333333,0.666667,-0.666667),(0.666667,0.666667,-0.333333),(0,0.83205,-0.5547),(0.301511,0.904534,-0.301511),(0,0.970142,-0.242536),(-0.970142,0,-0.242536),(-0.904534,0.301511,-0.301511),(-0.83205,0,-0.5547),(-0.666667,0.333333,-0.666667),(-0.5547,0,-0.83205),(-0.301511,0.301511,-0.904534),(-0.242536,0,-0.970142),(-0.666667,0.666667,-0.333333),(-0.333333,0.666667,-0.666667),(-0.301511,0.904534,-0.301511),(0.904534,-0.301511,-0.301511),(0.666667,-0.333333,-0.666667),(0.301511,-0.301511,-0.904534),(0,-0.242536,-0.970142),(0.666667,-0.666667,-0.333333),(0.333333,-0.666667,-0.666667),(0,-0.5547,-0.83205),(0.301511,-0.904534,-0.301511),(0,-0.83205,-0.5547),(0,-0.970142,-0.242536),(-0.301511,-0.301511,-0.904534),(-0.666667,-0.333333,-0.666667),(-0.904534,-0.301511,-0.301511),(-0.333333,-0.666667,-0.666667),(-0.666667,-0.666667,-0.333333),(-0.301511,-0.904534,-0.301511)]),
              color=Color(color=[(1,0,0)])))])])]),
    Transform(DEF='MAXELLIPSOID',scale=(3,3,5),translation=(0,0,40),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1],
          coord=Coordinate(point=[(10,0,0),(9.70142,2.42536,0),(9.70142,0,2.42536),(9.04534,3.01511,3.01511),(8.3205,0,5.547),(6.66667,3.33333,6.66667),(5.547,0,8.3205),(3.01511,3.01511,9.04534),(2.42536,0,9.70142),(0,2.42536,9.70142),(0,0,10),(8.3205,5.547,0),(6.66667,6.66667,3.33333),(3.33333,6.66667,6.66667),(0,5.547,8.3205),(5.547,8.3205,0),(3.01511,9.04534,3.01511),(0,8.3205,5.547),(2.42536,9.70142,0),(0,9.70142,2.42536),(0,10,0),(-2.42536,0,9.70142),(-3.01511,3.01511,9.04534),(-5.547,0,8.3205),(-6.66667,3.33333,6.66667),(-8.3205,0,5.547),(-9.04534,3.01511,3.01511),(-9.70142,0,2.42536),(-9.70142,2.42536,0),(-10,0,0),(-3.33333,6.66667,6.66667),(-6.66667,6.66667,3.33333),(-8.3205,5.547,0),(-3.01511,9.04534,3.01511),(-5.547,8.3205,0),(-2.42536,9.70142,0),(0,-2.42536,9.70142),(3.01511,-3.01511,9.04534),(6.66667,-3.33333,6.66667),(9.04534,-3.01511,3.01511),(9.70142,-2.42536,0),(0,-5.547,8.3205),(3.33333,-6.66667,6.66667),(6.66667,-6.66667,3.33333),(8.3205,-5.547,0),(0,-8.3205,5.547),(3.01511,-9.04534,3.01511),(5.547,-8.3205,0),(0,-9.70142,2.42536),(2.42536,-9.70142,0),(0,-10,0),(-9.70142,-2.42536,0),(-9.04534,-3.01511,3.01511),(-6.66667,-3.33333,6.66667),(-3.01511,-3.01511,9.04534),(-8.3205,-5.547,0),(-6.66667,-6.66667,3.33333),(-3.33333,-6.66667,6.66667),(-5.547,-8.3205,0),(-3.01511,-9.04534,3.01511),(-2.42536,-9.70142,0),(0,0,-10),(0,2.42536,-9.70142),(2.42536,0,-9.70142),(3.01511,3.01511,-9.04534),(5.547,0,-8.3205),(6.66667,3.33333,-6.66667),(8.3205,0,-5.547),(9.04534,3.01511,-3.01511),(9.70142,0,-2.42536),(0,5.547,-8.3205),(3.33333,6.66667,-6.66667),(6.66667,6.66667,-3.33333),(0,8.3205,-5.547),(3.01511,9.04534,-3.01511),(0,9.70142,-2.42536),(-9.70142,0,-2.42536),(-9.04534,3.01511,-3.01511),(-8.3205,0,-5.547),(-6.66667,3.33333,-6.66667),(-5.547,0,-8.3205),(-3.01511,3.01511,-9.04534),(-2.42536,0,-9.70142),(-6.66667,6.66667,-3.33333),(-3.33333,6.66667,-6.66667),(-3.01511,9.04534,-3.01511),(9.04534,-3.01511,-3.01511),(6.66667,-3.33333,-6.66667),(3.01511,-3.01511,-9.04534),(0,-2.42536,-9.70142),(6.66667,-6.66667,-3.33333),(3.33333,-6.66667,-6.66667),(0,-5.47,-8.3205),(3.01511,-9.04534,-3.01511),(0,-8.3205,-5.547),(0,-9.70142,-2.42536),(-3.01511,-3.01511,-9.04534),(-6.66667,-3.33333,-6.66667),(-9.04534,-3.01511,-3.01511),(-3.33333,-6.66667,-6.66667),(-6.66667,-6.66667,-3.33333),(-3.01511,-9.04534,-3.01511)]),
          color=Color(color=[(0,0,1)])))]),
    ProximitySensor(DEF='PROX_SENSOR',size=(1000,1000,1000)),
    Transform(DEF='TRANS1',
      children=[
      Transform(translation=(-0.35,-0.15,-0.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Text(DEF='TYPESTRING1',string=["message from Script is inserted here"],
            fontStyle=FontStyle(size=0.03,style_='BOLD')))])]),
    Script(DEF='AVATARSCRIPT',directOutput=True,url=["ellipsoids.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/ellipsoids.js"],
      field=[
      field(accessType='initializeOnly',name='typestring1',type='SFNode',
        children=[
        Text(USE='TYPESTRING1')]),
      field(accessType='inputOnly',name='printOutsideMaxFront',type='SFBool'),
      field(accessType='inputOnly',name='printJustOutsideMaxFront',type='SFBool'),
      field(accessType='inputOnly',name='printBetweenFront',type='SFBool'),
      field(accessType='inputOnly',name='printMinFront',type='SFBool'),
      field(accessType='inputOnly',name='printMinCenterFront',type='SFBool'),
      field(accessType='inputOnly',name='printOutsideMaxRight',type='SFBool'),
      field(accessType='inputOnly',name='printJustOutsideMaxRight',type='SFBool'),
      field(accessType='inputOnly',name='printBetweenRight',type='SFBool'),
      field(accessType='inputOnly',name='printMinRight',type='SFBool'),
      field(accessType='inputOnly',name='printMinCenterRight',type='SFBool'),
      field(accessType='inputOnly',name='printOutsideMaxRear',type='SFBool'),
      field(accessType='inputOnly',name='printJustOutsideMaxRear',type='SFBool'),
      field(accessType='inputOnly',name='printBetweenRear',type='SFBool'),
      field(accessType='inputOnly',name='printMinRear',type='SFBool'),
      field(accessType='inputOnly',name='printMinCenterRear',type='SFBool'),
      field(accessType='inputOnly',name='printOutsideMaxLeft',type='SFBool'),
      field(accessType='inputOnly',name='printJustOutsideMaxLeft',type='SFBool'),
      field(accessType='inputOnly',name='printBetweenLeft',type='SFBool'),
      field(accessType='inputOnly',name='printMinLeft',type='SFBool'),
      field(accessType='inputOnly',name='printMinCenterLeft',type='SFBool'),
      field(accessType='inputOnly',name='printOutsideMaxBottom',type='SFBool'),
      field(accessType='inputOnly',name='printJustOutsideMaxBottom',type='SFBool'),
      field(accessType='inputOnly',name='printBetweenBottom',type='SFBool'),
      field(accessType='inputOnly',name='printMinBottom',type='SFBool'),
      field(accessType='inputOnly',name='printMinCenterBottom',type='SFBool'),
      field(accessType='inputOnly',name='printOutsideMaxTop',type='SFBool'),
      field(accessType='inputOnly',name='printJustOutsideMaxTop',type='SFBool'),
      field(accessType='inputOnly',name='printBetweenTop',type='SFBool'),
      field(accessType='inputOnly',name='printMinTop',type='SFBool'),
      field(accessType='inputOnly',name='printMinCenterTop',type='SFBool'),
      field(accessType='initializeOnly',name='outsideMaxFrontString',type='MFString',value=["FRONT VIEW: Outside maxFront (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxFrontString',type='MFString',value=["Just outside maxFront (no sound)"]),
      field(accessType='initializeOnly',name='justInsideMaxFrontString',type='MFString',value=["Just inside maxFront (no sound)"]),
      field(accessType='initializeOnly',name='betweenFrontString',type='MFString',value=["Midway between ellipsoids(max sound -10dB)"]),
      field(accessType='initializeOnly',name='minFrontString',type='MFString',value=["At minFront (max sound)"]),
      field(accessType='initializeOnly',name='minCenterFrontString',type='MFString',value=["At ellipsoid center (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxRightString',type='MFString',value=["RIGHT VIEW: Outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxRightString',type='MFString',value=["Just outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justInsideMaxRightString',type='MFString',value=["Just inside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='betweenRightString',type='MFString',value=["Midway between ellipsoids (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minRightString',type='MFString',value=["At min ellipsoid (max sound)"]),
      field(accessType='initializeOnly',name='minCenterRightString',type='MFString',value=["At ellipsoid center (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxRearString',type='MFString',value=["REAR VIEW: Outside maxBack (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxRearString',type='MFString',value=["Just outside maxBack (no sound)"]),
      field(accessType='initializeOnly',name='justInsideMaxRearString',type='MFString',value=["Just inside maxBack (no sound)"]),
      field(accessType='initializeOnly',name='betweenRearString',type='MFString',value=["Midway between maxBack and minBack (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minRearString',type='MFString',value=["At minBack (max sound)"]),
      field(accessType='initializeOnly',name='minCenterRearString',type='MFString',value=["At ellipsoid center (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxLeftString',type='MFString',value=["LEFT VIEW: Outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxLeftString',type='MFString',value=["Just outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justInsideMaxLeftString',type='MFString',value=["Just inside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='betweenLeftString',type='MFString',value=["Midway between ellipsoids (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minLeftString',type='MFString',value=["At min ellipsoid (max sound)"]),
      field(accessType='initializeOnly',name='minCenterLeftString',type='MFString',value=["At ellipsoid center (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxTopString',type='MFString',value=["TOP VIEW: Outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxTopString',type='MFString',value=["Just outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justInsideMaxTopString',type='MFString',value=["Just inside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='betweenTopString',type='MFString',value=["Midway between ellipsoids (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minTopString',type='MFString',value=["[At min ellipsoid (max sound)"]),
      field(accessType='initializeOnly',name='minCenterTopString',type='MFString',value=["At ellipsoid center top (max sound)"]),
      field(accessType='initializeOnly',name='minCenterBottomString',type='MFString',value=["At ellipsoid center bottom (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxBottomString',type='MFString',value=["BOTTOM VIEW: Outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxBottomString',type='MFString',value=["Just outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justInsideMaxBottomString',type='MFString',value=["Just inside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='betweenBottomString',type='MFString',value=["Midway between ellipsoids (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minBottomString',type='MFString',value=["At min ellipsoid (max sound)"])]),
    ROUTE(fromField='isBound',fromNode='OUTSIDEMAXFRONT',toField='printOutsideMaxFront',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='JUSTOUTSIDEMAXFRONT',toField='printJustOutsideMaxFront',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='BETWEENFRONT',toField='printBetweenFront',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINFRONT',toField='printMinFront',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINCENTERFRONT',toField='printMinCenterFront',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='OUTSIDEMAXRIGHT',toField='printOutsideMaxRight',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='JUSTOUTSIDEMAXRIGHT',toField='printJustOutsideMaxRight',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='BETWEENRIGHT',toField='printBetweenRight',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINRIGHT',toField='printMinRight',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINCENTERRIGHT',toField='printMinCenterRight',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='OUTSIDEMAXREAR',toField='printOutsideMaxRear',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='JUSTOUTSIDEMAXREAR',toField='printJustOutsideMaxRear',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='BETWEENREAR',toField='printBetweenRear',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINREAR',toField='printMinRear',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINCENTERREAR',toField='printMinCenterRear',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='OUTSIDEMAXLEFT',toField='printOutsideMaxLeft',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='JUSTOUTSIDEMAXLEFT',toField='printJustOutsideMaxLeft',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='BETWEENLEFT',toField='printBetweenLeft',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINLEFT',toField='printMinLeft',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINCENTERLEFT',toField='printMinCenterLeft',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='OUTSIDEMAXTOP',toField='printOutsideMaxTop',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='JUSTOUTSIDEMAXTOP',toField='printJustOutsideMaxTop',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='BETWEENTOP',toField='printBetweenTop',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINTOP',toField='printMinTop',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINCENTERTOP',toField='printMinCenterTop',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='OUTSIDEMAXBOTTOM',toField='printOutsideMaxBottom',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='JUSTOUTSIDEMAXBOTTOM',toField='printJustOutsideMaxBottom',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='BETWEENBOTTOM',toField='printBetweenBottom',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINBOTTOM',toField='printMinBottom',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isBound',fromNode='MINCENTERBOTTOM',toField='printMinCenterBottom',toNode='AVATARSCRIPT'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS1'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ellipsoids.py")
