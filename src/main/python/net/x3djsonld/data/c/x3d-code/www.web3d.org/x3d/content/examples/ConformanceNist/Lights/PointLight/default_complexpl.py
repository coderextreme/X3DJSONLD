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
    meta(content='default_complexpl.x3d',name='title'),
    meta(content='default_complexpl-front.jpg',name='Image'),
    meta(content='default_complexpl-top.jpg',name='Image'),
    meta(content='default_complexpl-bottom.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to apply default values of a PointLight node to complex geometry (ElevationGrid, Extrusion, and IndexedFaceSet). The test should generate all three complex geometry with the default color. IndexedLineSet and PointSet are not lit geometry, therefore are not part of this test.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/PointLight/default_complexpl.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='default_complexpl.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,8)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,8,-0.5)),
      Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-8,-0.5))]),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    SpotLight(beamWidth=1.570796,cutOffAngle=.785398,on=False),
    DirectionalLight(on=False),
    PointLight(),
    Transform(translation=(-1.18587,-0.651405,-1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=ElevationGrid(height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.0233242,0.0461275,0.0679003,0.0881563,0.106443,0.122352,0.135528,0.145676,0.152571,0.156057,0.156057,0.152571,0.145676,0.135528,0.122352,0.106443,0.0881566,0.0679006,0.0461278,0.0233246,0,0.0461275,0.0912245,0.134284,0.174343,0.210508,0.241971,0.268028,0.288098,0.301733,0.308627,0.308627,0.301733,0.288099,0.268029,0.241971,0.210509,0.174344,0.134284,0.0912253,0.0461283,0,0.0679003,0.134284,0.197668,0.256636,0.309871,0.356185,0.394542,0.424085,0.444155,0.454304,0.454304,0.444155,0.424085,0.394542,0.356185,0.309872,0.256637,0.197669,0.134285,0.0679015,0,0.0881563,0.174343,0.256636,0.333195,0.402312,0.462442,0.512241,0.550598,0.576656,0.589832,0.589832,0.576656,0.550599,0.512242,0.462443,0.402313,0.333197,0.256637,0.174345,0.0881578,0,0.106443,0.210508,0.309871,0.402312,0.485766,0.558369,0.618498,0.664812,0.696275,0.712184,0.712184,0.696275,0.664813,0.618499,0.55837,0.485767,0.402314,0.309873,0.21051,0.106445,0,0.122352,0.241971,0.356185,0.462442,0.558369,0.641823,0.710939,0.764175,0.80034,0.818627,0.818627,0.800341,0.764176,0.710941,0.641824,0.55837,0.462444,0.356187,0.241973,0.122354,0,0.135528,0.268028,0.394542,0.512241,0.618498,0.710939,0.787499,0.846468,0.886527,0.906783,0.906784,0.886528,0.846468,0.7875,0.710941,0.6185,0.512243,0.394544,0.268031,0.13553,0,0.145676,0.288098,0.424085,0.550598,0.664812,0.764175,0.846468,0.909852,0.952911,0.974684,0.974684,0.952911,0.909852,0.846469,0.764177,0.664814,0.5506,0.424087,0.288101,0.145679,0,0.152571,0.301733,0.444155,0.576656,0.696275,0.80034,0.886527,0.952911,0.998008,1.02081,1.02081,0.998009,0.952912,0.886529,0.800342,0.696277,0.576658,0.444158,0.301736,0.152573,0,0.156057,0.308627,0.454304,0.589832,0.712184,0.818627,0.906783,0.974684,1.02081,1.04414,1.04414,1.02081,0.974685,0.906785,0.818629,0.712186,0.589834,0.454306,0.30863,0.156059,0,0.156057,0.308627,0.454304,0.589832,0.712184,0.818627,0.906784,0.974684,1.02081,1.04414,1.04414,1.02081,0.974685,0.906785,0.818629,0.712186,0.589834,0.454306,0.30863,0.156059,0,0.152571,0.301733,0.444155,0.576656,0.696275,0.800341,0.886528,0.952911,0.998009,1.02081,1.02081,0.998009,0.952912,0.886529,0.800342,0.696277,0.576658,0.444158,0.301736,0.152573,0,0.145676,0.288099,0.424085,0.550599,0.664813,0.764176,0.846468,0.909852,0.952912,0.974685,0.974685,0.952912,0.909853,0.84647,0.764177,0.664815,0.550601,0.424088,0.288101,0.145679,0,0.135528,0.268029,0.394542,0.512242,0.618499,0.710941,0.7875,0.846469,0.886529,0.906785,0.906785,0.886529,0.84647,0.787502,0.710942,0.618501,0.512244,0.394544,0.268031,0.135531,0,0.122352,0.241971,0.356185,0.462443,0.55837,0.641824,0.710941,0.764177,0.800342,0.818629,0.818629,0.800342,0.764177,0.710942,0.641825,0.558372,0.462445,0.356187,0.241974,0.122354,0,0.106443,0.210509,0.309872,0.402313,0.485767,0.55837,0.6185,0.664814,0.696277,0.712186,0.712186,0.696277,0.664815,0.618501,0.558372,0.485769,0.402315,0.309874,0.210511,0.106445,0,0.0881566,0.174344,0.256637,0.333197,0.402314,0.462444,0.512243,0.5506,0.576658,0.589834,0.589834,0.576658,0.550601,0.512244,0.462445,0.402315,0.333198,0.256638,0.174345,0.0881582,0,0.0679006,0.134284,0.197669,0.256637,0.309873,0.356187,0.394544,0.424087,0.444158,0.454306,0.454306,0.444158,0.424088,0.394544,0.356187,0.309874,0.256638,0.19767,0.134286,0.0679018,0,0.0461278,0.0912253,0.134285,0.174345,0.21051,0.241973,0.268031,0.288101,0.301736,0.30863,0.30863,0.301736,0.288101,0.268031,0.241974,0.210511,0.174345,0.134286,0.0912261,0.0461287,0,0.0233246,0.0461283,0.0679015,0.0881578,0.106445,0.122354,0.13553,0.145679,0.152573,0.156059,0.156059,0.152573,0.145679,0.135531,0.122354,0.106445,0.0881582,0.0679018,0.0461287,0.0233251],solid=False,xDimension=21,xSpacing=0.1,zDimension=21,zSpacing=0.1))]),
    Transform(scale=(0.313408,0.313408,0.313407),translation=(-3.07052,-0.154345,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Extrusion(crossSection=[(1,0),(0.92388,0.382683),(0.707107,0.707106),(0.382684,0.923879),(1.26759e-006,1),(-0.382682,0.92388),(-0.707105,0.707108),(-0.923879,0.382685),(-1,2.53518e-006),(-0.923881,-0.382681),(-0.707109,-0.707105),(-0.382687,-0.923878),(-3.80277e-006,-1),(0.38268,-0.923881),(0.707104,-0.70711),(0.923878,-0.382688),(1,0)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1)],solid=False,spine=[(-1.58296,-1.01245,0),(-1.21333,-1.39814,0),(-0.618718,-1.41421,0),(0,-1,0),(0,1,0),(0.554436,1.39814,0),(1.18119,1.39814,0),(1.56688,1.01245,0)]))]),
    Transform(scale=(0.615111,0.615111,0.615112),translation=(2.87214,-0.147732,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=IndexedFaceSet(coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],creaseAngle=0.5,
          coord=Coordinate(point=[(-2,1,1),(-2,-1,1),(2,1,1),(2,-1,1),(2,1,-1),(2,-1,-1),(-2,1,-1),(-2,-1,-1)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for default_complexpl.py")
