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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='Nested.x3d',name='title'),
    meta(content='Multiple nested sensors: this world illustrates the use of nested sensors where one sensor covers shapes in an inner Transform group, and another sensor covers shapes in an outer Transform group.',name='description'),
    meta(content='John L. Moreland',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 July 1998',name='created'),
    meta(content='2 February 2014',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/nested.wrl',name='reference'),
    meta(content='http://www.siggraph.org/s98',name='reference'),
    meta(content='http://www.siggraph.org/s98/conference/courses/18.html',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/slides/mt0172.htm',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/vrml97.htm',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/Nested.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Copyright (c) 1998, John L. Moreland"],title='Nested sensors'),
    NavigationInfo(),
    Viewpoint(description='Entry view',orientation=(1.0,0.0,0.0,-0.25),position=(0.0,1.0,2.0)),
    Transform(DEF='TopTf',
      children=[
      Transform(DEF='Segment1Tf',center=(0.0,-0.25,0.0),translation=(0.0,0.25,0.0),
        children=[
        SphereSensor(DEF='Segment1Ss'),
        Transform(DEF='Block',scale=(0.1,0.5,0.1),
          children=[
          Shape(
            appearance=Appearance(DEF='Appear',
              material=Material(diffuseColor=(1.0,1.0,0.0))),
            geometry=Sphere(radius=0.5))]),
        Transform(translation=(0.0,0.25,0.0),
          children=[
          Shape(
            appearance=Appearance(USE='Appear'),
            geometry=Sphere(radius=0.05))]),
        Transform(DEF='Segment2Tf',center=(0.0,0.25,0.0),
          children=[
          SphereSensor(DEF='Segment2Ss'),
          Transform(translation=(0.0,0.5,0.0),
            children=[
            Transform(USE='Block')])])])]),
    ROUTE(fromField='rotation_changed',fromNode='Segment1Ss',toField='set_rotation',toNode='Segment1Tf'),
    ROUTE(fromField='rotation_changed',fromNode='Segment2Ss',toField='set_rotation',toNode='Segment2Tf'),
    Shape(
      appearance=Appearance(
        material=Material(),),
      geometry=Box(size=(2.0,0.02,2.0)))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Nested.py")
