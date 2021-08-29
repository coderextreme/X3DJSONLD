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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='value_changed.x3d',name='title'),
    meta(content='value_changed-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='12 June 2002',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='test fails, no geometry produced',name='error'),
    meta(content='Test of a CoordinateInterpolators ability to load the correct keyValue into its "value_changed" field prior to receiving any events. Two CoordinateInterpolator node are associated with two seperate IndexedFaceSet geometry. The CoordinateInterpolator associated with the IndexedFaceSet on the left has keyValues that create a box shape that is twice its initial size, while the CoordinateInterpolator associated with the right Box has the default of no keyValues, or [ ]. As a result, the CoordinateInterpolator on the left should initialize its "value_changed" field to the value of its first keyValue when the pointing device indicates the box, and the box should appear to double in size while it is indicated by the pointing device. Because no keyValues are provided to the right CoordinateInterpolator, it should initialize its "value_changed" field to the MFVec3f default value of an empty MFVec3f field. Passing the pointing device over the right box should not result in any change in the size of the box. Michael Kass',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/CoordinateInterpolator/value_changed.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='value_changed.x3d'),
    Background(groundColor=[(0,0,0)],skyColor=[(0.2,0.2,0.2)]),
    CoordinateInterpolator(DEF='COORD_INTERP1'),
    CoordinateInterpolator(DEF='COORD_INTERP2'),
    Transform(translation=(-3,0,0),
      children=[
      Transform(DEF='TRANS1',
        children=[
        TouchSensor(DEF='TS1',description='touch to activate'),
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=IndexedFaceSet(
            coord=Coordinate(DEF='COORD1')))])]),
    Transform(translation=(3,0,0),
      children=[
      Transform(DEF='TRANS2',
        children=[
        TouchSensor(DEF='TS2',description='touch to activate'),
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=IndexedFaceSet(
            coord=Coordinate(DEF='COORD2')))])]),
    Script(DEF='COORDINIZEIT',directOutput=True,url=["value_changed.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/CoordinateInterpolator/value_changed.js"],
      field=[
      field(accessType='initializeOnly',name='nodein1',type='SFNode',
        children=[
        CoordinateInterpolator(USE='COORD_INTERP1')]),
      field(accessType='initializeOnly',name='nodein2',type='SFNode',
        children=[
        CoordinateInterpolator(USE='COORD_INTERP1')]),
      field(accessType='initializeOnly',name='nodeout1',type='SFNode',
        children=[
        Coordinate(USE='COORD1')]),
      field(accessType='initializeOnly',name='nodeout2',type='SFNode',
        children=[
        Coordinate(USE='COORD2')]),
      field(accessType='inputOnly',name='isOver1',type='SFBool'),
      field(accessType='inputOnly',name='isOver2',type='SFBool'),
      field(accessType='outputOnly',name='point',type='SFVec3f'),
      field(accessType='initializeOnly',name='reset',type='MFVec3f',value=[(-1,1,1),(-1,-1,1),(1,1,1),(1,-1,1),(1,1,-1),(1,-1,-1),(-1,1,-1),(-1,-1,-1)])]),
    ROUTE(fromField='isOver',fromNode='TS1',toField='isOver1',toNode='COORDINIZEIT'),
    ROUTE(fromField='isOver',fromNode='TS2',toField='isOver2',toNode='COORDINIZEIT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for value_changed.py")
