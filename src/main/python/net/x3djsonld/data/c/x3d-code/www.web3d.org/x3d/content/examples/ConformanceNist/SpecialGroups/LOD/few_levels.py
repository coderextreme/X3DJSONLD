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
    meta(content='few_levels.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to associate extra entries in the range field with the last entry in the levels field. The test specifies four different range values that indicate at what distance to display the corresponding entry from the level field. The second, third and fourth entries in the range field does not contain a corresponding entry in the level field and therefore should always be associated with the entry named ref2.x3d in the level field regardless of the users avatar location. Each of the two entries in the level field adds a level of detail to the figure in question as the users avatar gets closer to the figure. The distance of the viewer from the object is changed by clicking on the desired buttom as indicated by the text displayed. The test should generate a figure that resembles a temple with white columns, a (this is the figure that is displayed when the highest level of detail is selected. Other levels display a version of the same figure, but with much less details.)',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/few_levels.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='few_levels.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Viewpoint(DEF='the-view',description='user avatar position',position=(0,0,64))]),
    Transform(DEF='big-trans1',translation=(0,0,54),
      children=[
      Transform(scale=(0.02,0.02,0.02),translation=(-5.2,-2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=1,diffuseColor=(0,1,0),emissiveColor=(0,1,0))),
          geometry=Text(string=["CLICK DESIRED LEVEL OF DETAIL BELOW"],
            fontStyle=FontStyle(DEF='the-style',justify=["FIRST","FIRST"],size=29,style_='BOLD')))]),
      Transform(scale=(0.02,0.02,0.02),translation=(-4.8,-2.7,0),
        children=[
        Shape(
          appearance=Appearance(DEF='the-appearance',
            material=Material(ambientIntensity=1,diffuseColor=(0,0,1),emissiveColor=(0,0,1))),
          geometry=Text(string=["LOWEST (0 0 64)"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch1',description='touch to activate 1')]),
      Transform(scale=(0.02,0.02,0.02),translation=(-4.8,-3.4,0),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Text(string=["MEDIUM LOW (0 0 48)"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch2',description='touch to activate 2')]),
      Transform(scale=(0.02,0.02,0.02),translation=(1,-2.7,0),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Text(string=["MEDIUM (0 0 32)"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch3',description='touch to activate 3')]),
      Transform(scale=(0.02,0.02,0.02),translation=(1,-3.4,0),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Text(string=["HIGHEST (0 0 16)"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch4',description='touch to activate 4')])]),
    TimeSensor(DEF='time1',cycleInterval=2),
    TimeSensor(DEF='time2',cycleInterval=2),
    TimeSensor(DEF='time3',cycleInterval=2),
    TimeSensor(DEF='time4',cycleInterval=2),
    PositionInterpolator(DEF='first-position',key=[0,1],keyValue=[(0,0,64),(0,0,64)]),
    PositionInterpolator(DEF='second-position',key=[0,1],keyValue=[(0,0,48),(0,0,48)]),
    PositionInterpolator(DEF='third-position',key=[0,1],keyValue=[(0,0,32),(0,0,32)]),
    PositionInterpolator(DEF='fourth-position',key=[0,1],keyValue=[(0,0,16),(0,0,16)]),
    PositionInterpolator(DEF='text1',key=[0,1],keyValue=[(0,0,54),(0,0,54)]),
    PositionInterpolator(DEF='text2',key=[0,1],keyValue=[(0,0,38),(0,0,38)]),
    PositionInterpolator(DEF='text3',key=[0,1],keyValue=[(0,0,22),(0,0,22)]),
    PositionInterpolator(DEF='text4',key=[0,1],keyValue=[(0,0,6),(0,0,6)]),
    Transform(rotation=(1,0,0,0.15),
      children=[
      LOD(DEF='intentionally-too-few',range=[17,33,49,55],
        children=[
        Inline(url=["ref1.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref1.x3d","ref1.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref1.wrl"]),
        Inline(url=["ref2.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref2.x3d","ref2.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref2.wrl"])])]),
    ROUTE(fromField='touchTime',fromNode='the-touch1',toField='startTime',toNode='time1'),
    ROUTE(fromField='touchTime',fromNode='the-touch2',toField='startTime',toNode='time2'),
    ROUTE(fromField='touchTime',fromNode='the-touch3',toField='startTime',toNode='time3'),
    ROUTE(fromField='touchTime',fromNode='the-touch4',toField='startTime',toNode='time4'),
    ROUTE(fromField='fraction_changed',fromNode='time1',toField='set_fraction',toNode='first-position'),
    ROUTE(fromField='fraction_changed',fromNode='time2',toField='set_fraction',toNode='second-position'),
    ROUTE(fromField='fraction_changed',fromNode='time3',toField='set_fraction',toNode='third-position'),
    ROUTE(fromField='fraction_changed',fromNode='time4',toField='set_fraction',toNode='fourth-position'),
    ROUTE(fromField='value_changed',fromNode='first-position',toField='position',toNode='the-view'),
    ROUTE(fromField='value_changed',fromNode='second-position',toField='position',toNode='the-view'),
    ROUTE(fromField='value_changed',fromNode='third-position',toField='position',toNode='the-view'),
    ROUTE(fromField='value_changed',fromNode='fourth-position',toField='position',toNode='the-view'),
    ROUTE(fromField='fraction_changed',fromNode='time1',toField='set_fraction',toNode='text1'),
    ROUTE(fromField='fraction_changed',fromNode='time2',toField='set_fraction',toNode='text2'),
    ROUTE(fromField='fraction_changed',fromNode='time3',toField='set_fraction',toNode='text3'),
    ROUTE(fromField='fraction_changed',fromNode='time4',toField='set_fraction',toNode='text4'),
    ROUTE(fromField='value_changed',fromNode='text1',toField='translation',toNode='big-trans1'),
    ROUTE(fromField='value_changed',fromNode='text2',toField='translation',toNode='big-trans1'),
    ROUTE(fromField='value_changed',fromNode='text3',toField='translation',toNode='big-trans1'),
    ROUTE(fromField='value_changed',fromNode='text4',toField='translation',toNode='big-trans1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for few_levels.py")
