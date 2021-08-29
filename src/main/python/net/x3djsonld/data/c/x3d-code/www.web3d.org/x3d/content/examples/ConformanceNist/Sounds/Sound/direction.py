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
    meta(content='direction.x3d',name='title'),
    meta(content='direction-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test direction. A Sound node can have its "direction" field changed by clicking on any of the 3 buttons in the left portion of this world. Each will change a Sound ellipsoids orientation along one of the 3 axies (X, Y or Z). As a result, sound audibility should be confined to the inner portion of the particular ellipsoid that is aligned with the Sounds direction. Clicking on a button, and then using the worlds Viewpoints to navigate in and out of the 3 ellipsoids should verify that a Sound is audible only along its current "direction" ellipsoid.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/direction.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='direction.x3d'),
    Viewpoint(DEF='OUTSIDEMAXFRONT',description='FRONT: Outside maxFront (no sound)',position=(0,0,60)),
    Viewpoint(DEF='BETWEENFRONT',description='Just inside max ellipsoid (max sound)',position=(0,0,14)),
    Viewpoint(DEF='OUTSIDEMAXRIGHT',description='RIGHT: Outside max ellipsoid, (no sound)',orientation=(0,1,0,1.57),position=(60,0,0)),
    Viewpoint(DEF='BETWEENRIGHT',description='Just inside max ellipsoid, (max sound)',orientation=(0,1,0,1.57),position=(14,0,0)),
    Viewpoint(DEF='OUTSIDEMAXTOP',description='TOP: Outside max ellipsoid, (no sound)',orientation=(1,0,0,-1.57),position=(0,60,0)),
    Viewpoint(DEF='BETWEENTOP',description='Just inside max ellipsoid, (max sound)',orientation=(1,0,0,-1.57),position=(0,14,0)),
    ProximitySensor(DEF='PROX_SENSOR',size=(1000,1000,1000)),
    Sound(DEF='SOUND1',maxBack=3,maxFront=15,minBack=3,minFront=15,
      source=AudioClip(description='chimes',loop=True,url=["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])),
    Transform(
      children=[
      Transform(scale=(9,6.7,6.7),translation=(6,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1],
            coord=Coordinate(DEF='SpherePoints',point=[(1,0,0),(0.970142,0.242536,0),(0.970142,0,0.242536),(0.904534,0.301511,0.301511),(0.83205,0,0.5547),(0.666667,0.333333,0.666667),(0.5547,0,0.83205),(0.301511,0.301511,0.904534),(0.242536,0,0.970142),(0,0.242536,0.970142),(0,0,1),(0.83205,0.5547,0),(0.666667,0.666667,0.333333),(0.333333,0.666667,0.666667),(0,0.5547,0.83205),(0.5547,0.83205,0),(0.301511,0.904534,0.301511),(0,0.83205,0.5547),(0.242536,0.970142,0),(0,0.970142,0.242536),(0,1,0),(-0.242536,0,0.970142),(-0.301511,0.301511,0.904534),(-0.5547,0,0.83205),(-0.666667,0.333333,0.666667),(-0.83205,0,0.5547),(-0.904534,0.301511,0.301511),(-0.970142,0,0.242536),(-0.970142,0.242536,0),(-1,0,0),(-0.333333,0.666667,0.666667),(-0.666667,0.666667,0.333333),(-0.83205,0.5547,0),(-0.301511,0.904534,0.301511),(-0.5547,0.83205,0),(-0.242536,0.970142,0),(0,-0.242536,0.970142),(0.301511,-0.301511,0.904534),(0.666667,-0.333333,0.666667),(0.904534,-0.301511,0.301511),(0.970142,-0.242536,0),(0,-0.5547,0.83205),(0.333333,-0.666667,0.666667),(0.666667,-0.666667,0.333333),(0.83205,-0.5547,0),(0,-0.83205,0.5547),(0.301511,-0.904534,0.301511),(0.5547,-0.83205,0),(0,-0.970142,0.242536),(0.242536,-0.970142,0),(0,-1,0),(-0.970142,-0.242536,0),(-0.904534,-0.301511,0.301511),(-0.666667,-0.333333,0.666667),(-0.301511,-0.301511,0.904534),(-0.83205,-0.5547,0),(-0.666667,-0.666667,0.333333),(-0.333333,-0.666667,0.666667),(-0.5547,-0.83205,0),(-0.301511,-0.904534,0.301511),(-0.242536,-0.970142,0),(0,0,-1),(0,0.242536,-0.970142),(0.242536,0,-0.970142),(0.301511,0.301511,-0.904534),(0.5547,0,-0.83205),(0.666667,0.333333,-0.666667),(0.83205,0,-0.5547),(0.904534,0.301511,-0.301511),(0.970142,0,-0.242536),(0,0.5547,-0.83205),(0.333333,0.666667,-0.666667),(0.666667,0.666667,-0.333333),(0,0.83205,-0.5547),(0.301511,0.904534,-0.301511),(0,0.970142,-0.242536),(-0.970142,0,-0.242536),(-0.904534,0.301511,-0.301511),(-0.83205,0,-0.5547),(-0.666667,0.333333,-0.666667),(-0.5547,0,-0.83205),(-0.301511,0.301511,-0.904534),(-0.242536,0,-0.970142),(-0.666667,0.666667,-0.333333),(-0.333333,0.666667,-0.666667),(-0.301511,0.904534,-0.301511),(0.904534,-0.301511,-0.301511),(0.666667,-0.333333,-0.666667),(0.301511,-0.301511,-0.904534),(0,-0.242536,-0.970142),(0.666667,-0.666667,-0.333333),(0.333333,-0.666667,-0.666667),(0,-0.5547,-0.83205),(0.301511,-0.904534,-0.301511),(0,-0.83205,-0.5547),(0,-0.970142,-0.242536),(-0.301511,-0.301511,-0.904534),(-0.666667,-0.333333,-0.666667),(-0.904534,-0.301511,-0.301511),(-0.333333,-0.666667,-0.666667),(-0.666667,-0.666667,-0.333333),(-0.301511,-0.904534,-0.301511)]),
            color=Color(DEF='ELLIPSOID1COLOR',color=[(1,0,0)])))])]),
    Transform(DEF='TRANS2',
      children=[
      Transform(scale=(6.7,9,6.7),translation=(0,6,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1],
            coord=Coordinate(USE='SpherePoints'),
            color=Color(DEF='ELLIPSOID2COLOR',color=[(0,1,0)])))])]),
    Transform(DEF='TRANS3',
      children=[
      Transform(scale=(6.7,6.7,9),translation=(0,0,6),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1],
            coord=Coordinate(USE='SpherePoints'),
            color=Color(DEF='ELLIPSOID3COLOR',color=[(0,0,1)])))])]),
    Transform(DEF='DIRECTION_X_TRANS',
      children=[
      TouchSensor(DEF='TOUCHX',description='touch to activate X'),
      Transform(translation=(-3,1.5,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='XMATERIAL',ambientIntensity=1,diffuseColor=(1,0,0))),
          geometry=Box(DEF='X',size=(1.5,1,0.1))),
        Transform(translation=(-0.55,0,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["Direction","X-axis"],
              fontStyle=FontStyle(size=0.35)))])]),
      TimeSensor(DEF='XTIMER'),
      ColorInterpolator(DEF='XFLASH',key=[0,0.5,1],keyValue=[(1,0,0),(1,1,1),(1,0,0)])]),
    Transform(DEF='DIRECTION_Y_TRANS',
      children=[
      Transform(translation=(-3,0,-5),
        children=[
        TouchSensor(DEF='TOUCHY',description='touch to activate Y'),
        Shape(
          appearance=Appearance(
            material=Material(DEF='YMATERIAL',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Box(DEF='Y',size=(1.5,1,0.1))),
        Transform(translation=(-0.55,0,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["Direction","Y-axis"],
              fontStyle=FontStyle(size=0.35)))])]),
      TimeSensor(DEF='YTIMER'),
      ColorInterpolator(DEF='YFLASH',key=[0,0.5,1],keyValue=[(0,1,0),(1,1,1),(0,1,0)])]),
    Transform(DEF='Z_TRANS',
      children=[
      Transform(translation=(-3,-1.5,-5),
        children=[
        TouchSensor(DEF='TOUCHZ',description='touch to activate Z'),
        Shape(
          appearance=Appearance(
            material=Material(DEF='ZMATERIAL',ambientIntensity=1,diffuseColor=(0,0,1))),
          geometry=Box(DEF='Z',size=(1.5,1,0.1))),
        Transform(translation=(-0.55,0,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["Direction","Z-axis"],
              fontStyle=FontStyle(size=0.35)))])]),
      TimeSensor(DEF='ZTIMER'),
      ColorInterpolator(DEF='ZFLASH',key=[0,0.5,1],keyValue=[(0,0,1),(1,1,1),(0,0,1)])]),
    Transform(DEF='TRANS1',
      children=[
      Transform(translation=(-0.2,-0.15,-0.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Text(DEF='TYPESTRING1',string=["message from Script is inserted here"],
            fontStyle=FontStyle(size=0.025,style_='BOLD')))])]),
    Script(DEF='SOUND_SCRIPT',directOutput=True,url=["direction.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/direction.js"],
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
      field(accessType='initializeOnly',name='betweenFrontString',type='MFString',value=["Midway between ellipsoids(max sound -10dB)"]),
      field(accessType='initializeOnly',name='minFrontString',type='MFString',value=["At minFront (max sound)"]),
      field(accessType='initializeOnly',name='minCenterFrontString',type='MFString',value=["At ellipsoid center (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxRightString',type='MFString',value=["RIGHT VIEW: Outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxRightString',type='MFString',value=["Just outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='betweenRightString',type='MFString',value=["Midway between ellipsoids (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minRightString',type='MFString',value=["At min ellipsoid (max sound)"]),
      field(accessType='initializeOnly',name='minCenterRightString',type='MFString',value=["At ellipsoid center (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxRearString',type='MFString',value=["REAR VIEW: Outside maxBack (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxRearString',type='MFString',value=["Just outside maxBack (no sound)"]),
      field(accessType='initializeOnly',name='betweenRearString',type='MFString',value=["Midway between maxBack and minBack (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minRearString',type='MFString',value=["At minBack (max sound)"]),
      field(accessType='initializeOnly',name='minCenterRearString',type='MFString',value=["At ellipsoid center (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxLeftString',type='MFString',value=["LEFT VIEW: Outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxLeftString',type='MFString',value=["Just outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='betweenLeftString',type='MFString',value=["Midway between ellipsoids (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minLeftString',type='MFString',value=["At min ellipsoid (max sound)"]),
      field(accessType='initializeOnly',name='minCenterLeftString',type='MFString',value=["At ellipsoid center (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxTopString',type='MFString',value=["TOP VIEW: Outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxTopString',type='MFString',value=["Just outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='betweenTopString',type='MFString',value=["Midway between ellipsoids (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minTopString',type='MFString',value=["[At min ellipsoid (max sound)"]),
      field(accessType='initializeOnly',name='minCenterTopString',type='MFString',value=["At ellipsoid center (max sound)"]),
      field(accessType='initializeOnly',name='outsideMaxBottomString',type='MFString',value=["BOTTOM VIEW: Outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='justOutsideMaxBottomString',type='MFString',value=["Just outside max ellipsoid (no sound)"]),
      field(accessType='initializeOnly',name='betweenBottomString',type='MFString',value=["Midway between ellipsoids (max sound -10dB)"]),
      field(accessType='initializeOnly',name='minBottomString',type='MFString',value=["At min ellipsoid (max sound)"]),
      field(accessType='initializeOnly',name='xMaterial',type='SFNode',
        children=[
        Material(USE='XMATERIAL')]),
      field(accessType='initializeOnly',name='yMaterial',type='SFNode',
        children=[
        Material(USE='YMATERIAL')]),
      field(accessType='initializeOnly',name='zMaterial',type='SFNode',
        children=[
        Material(USE='ZMATERIAL')]),
      field(accessType='initializeOnly',name='sound1',type='SFNode',
        children=[
        Sound(USE='SOUND1')]),
      field(accessType='initializeOnly',name='ellipsoid1Color',type='SFNode',
        children=[
        Color(USE='ELLIPSOID1COLOR')]),
      field(accessType='initializeOnly',name='ellipsoid2Color',type='SFNode',
        children=[
        Color(USE='ELLIPSOID2COLOR')]),
      field(accessType='initializeOnly',name='ellipsoid3Color',type='SFNode',
        children=[
        Color(USE='ELLIPSOID3COLOR')]),
      field(accessType='initializeOnly',name='white',type='MFColor',value=[(1,1,1)]),
      field(accessType='initializeOnly',name='red',type='MFColor',value=[(1,0,0)]),
      field(accessType='initializeOnly',name='green',type='MFColor',value=[(0,1,0)]),
      field(accessType='initializeOnly',name='blue',type='MFColor',value=[(0,0,1)]),
      field(accessType='initializeOnly',name='sfWhite',type='SFColor',value=(1,1,1)),
      field(accessType='initializeOnly',name='sfRed',type='SFColor',value=(1,0,0)),
      field(accessType='initializeOnly',name='sfGreen',type='SFColor',value=(0,1,0)),
      field(accessType='initializeOnly',name='sfBlue',type='SFColor',value=(0,0,1)),
      field(accessType='inputOnly',name='colorEllipse1',type='SFBool'),
      field(accessType='inputOnly',name='colorEllipse2',type='SFBool'),
      field(accessType='inputOnly',name='colorEllipse3',type='SFBool'),
      field(accessType='initializeOnly',name='xAxis',type='SFVec3f',value=(1,0,0)),
      field(accessType='initializeOnly',name='yAxis',type='SFVec3f',value=(0,1,0)),
      field(accessType='initializeOnly',name='zAxis',type='SFVec3f',value=(0,0,1))]),
    ROUTE(fromField='isBound',fromNode='OUTSIDEMAXFRONT',toField='printOutsideMaxFront',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='isBound',fromNode='BETWEENFRONT',toField='printBetweenFront',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='isBound',fromNode='OUTSIDEMAXRIGHT',toField='printOutsideMaxRight',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='isBound',fromNode='BETWEENRIGHT',toField='printBetweenRight',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='isBound',fromNode='OUTSIDEMAXTOP',toField='printOutsideMaxTop',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='isBound',fromNode='BETWEENTOP',toField='printBetweenTop',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS1'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS1'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='DIRECTION_X_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='DIRECTION_X_TRANS'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='DIRECTION_Y_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='DIRECTION_Y_TRANS'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='Z_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='Z_TRANS'),
    ROUTE(fromField='isActive',fromNode='TOUCHX',toField='colorEllipse1',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='isActive',fromNode='TOUCHY',toField='colorEllipse2',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='isActive',fromNode='TOUCHZ',toField='colorEllipse3',toNode='SOUND_SCRIPT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for direction.py")
