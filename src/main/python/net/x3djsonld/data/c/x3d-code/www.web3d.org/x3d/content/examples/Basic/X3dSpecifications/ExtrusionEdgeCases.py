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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ExtrusionEdgeCases.x3d',name='title'),
    meta(content='Scene incorporating extrusion edge cases',name='description'),
    meta(content='Vsevolod Alekseyev, Vince Marchetti, Roy Walmsley, Leonard Daly, Dick Puk, Joe Williams, Don Brutzman',name='creator'),
    meta(content='29 January 2016',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='https://www.web3d.org/wiki/index.php/Extrusion_Edge_Cases',name='reference'),
    meta(content='add descriptions why each case holds special interest',name='TODO'),
    meta(content='add named Viewpoints with name for each case',name='TODO'),
    meta(content='X3D-public email thread http://web3d.org/pipermail/x3d-public_web3d.org/2016-January/004184.html',name='TODO'),
    meta(content='Mantis issue 923 https://www.web3d.org/member-only/mantis/view.php?id=923',name='TODO'),
    meta(content='X3D encodings, ISO/IEC 19775-1.4, Part 1: Architecture and base components, Clause 13 Geometry3D component, Topic 13.3.5 Extrusion, Section 13.3.5.4 Special cases',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/examples.html#ExecutionModel',name='specificationUrl'),
    meta(content='TODO github draft X3D 4.0 document',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/ExtrusionEdgeCases.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ExtrusionEdgeCases.x3d'),
    Group(
      children=[
      Transform(translation=(2,10,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.1,0.05))),
          geometry=Extrusion(crossSection=[(-1,0),(0,1),(1,0),(-1,0)],scale=[(1,1),(1,1),(1,1),(2,2),(3,3),(3,3)],spine=[(-5,0,0),(0,0,0),(4,4,0),(4,4,0),(4,4,0),(8,0,0)],
            #  spine is open, crossSection is closed 
            ))])]),
    Group(
      children=[
      Transform(scale=(2,2,2),translation=(-2,-2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.8,0.1))),
          geometry=Extrusion(crossSection=[(-1,0),(0,2),(1,0),(-1,0)],solid=False,
            #  spine is open, crossSection is closed 
            ))])]),
    Group(
      children=[
      Transform(scale=(2,2,2),translation=(2,-2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.8,0.1))),
          geometry=Extrusion(crossSection=[(-1,0),(0,2),(1,0),(-1,0)],solid=False,spine=[(3,1,0),(3,0,0)],
            #  spine is open, crossSection is closed 
            ))])]),
    Group(
      children=[
      Transform(scale=(1.5,1.5,1.5),translation=(20,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0,0.8))),
          #  spine is closed with only 3 points, thus 2 independent points. Sounds like a potential problem but is actually legitimate (i.e. not geometrically degenerate) for many cases. 
          geometry=Extrusion(beginCap=False,endCap=False,scale=[(1,1),(1.2,1.2),(1.4,1.4)],solid=False,spine=[(0,0,0),(0,1,0),(0,0,0)],
            #  spine is closed, crossSection is closed 
            ))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExtrusionEdgeCases.py")
