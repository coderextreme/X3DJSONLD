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
    component(level=2,name='Shape'),
    unit(category='length',conversionFactor=0.0254,name='INCH'),
    meta(content='NetfabbTetrahedronOriginal.x3d',name='title'),
    meta(content='Original model: test Netfabb import and export with simplest mesh closed solid.',name='description'),
    meta(content='Vincent Marchetti',name='creator'),
    meta(content='NetfabbConversionIssues.txt',name='reference'),
    meta(content='NetfabbTetrahedronReadme.txt',name='reference'),
    meta(content='1 October 2017',name='created'),
    meta(content='4 October 2017',name='translated'),
    meta(content='19 March 2020',name='modified'),
    meta(content='https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/Conversions/NetfabbTetrahedronOriginal.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Conversions/NetfabbTetrahedronOriginal.x3d',name='identifier'),
    meta(content='Netfabb, https://www.autodesk.com/products/netfabb',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Copyright (c) Web3D Consortium Inc. 2017',name='rights'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NetfabbTetrahedronOriginal.x3d'),
    NavigationInfo(type=["ANY"]),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(1.0,0.0,0.0))),
      geometry=IndexedFaceSet(coordIndex=[3,1,0,-1,3,2,1,-1,3,0,2,-1,0,1,2,-1],
        coord=Coordinate(point=[(0.29,0.5,-0.2),(0.29,-0.5,-0.2),(-0.58,0.0,-0.2),(0.0,0.0,0.61)]))),
    Group(DEF='triad',
      children=[
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0),(1,0,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2,
            #  linetype='1' solid 
            ))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0),(0,1,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0)),
          lineProperties=LineProperties(linewidthScaleFactor=2,
            #  linetype='1' solid 
            ))),
      Shape(
        geometry=LineSet(vertexCount=[2],
          coord=Coordinate(point=[(0,0,0),(0,0,1)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,0,1)),
          lineProperties=LineProperties(linewidthScaleFactor=2,
            #  linetype='1' solid 
            )))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NetfabbTetrahedronOriginal.py")
