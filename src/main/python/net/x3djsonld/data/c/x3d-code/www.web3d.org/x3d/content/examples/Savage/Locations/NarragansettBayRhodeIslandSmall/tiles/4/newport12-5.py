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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoLOD(center=(41.63985995553778,-71.34608416014737,0.0),range=2150.0764,child1Url=['../../tiles/5/newport24-10.x3d'],child2Url=['../../tiles/5/newport24-11.x3d'],child3Url=['../../tiles/5/newport25-10.x3d'],child4Url=['../../tiles/5/newport25-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.35415501792488,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,8,17,9,3,0,0,0,0,2,1,8,7,8,3,2,0,0,0,0,0,0,0,0,9,16,9,5,8,3,3,8,13,11,6,7,5,7,2,2,0,0,0,0,0,0,0,6,10,10,7,11,10,8,10,11,15,16,12,5,6,4,4,4,0,0,0,0,0,0,2,7,10,14,10,12,13,11,11,9,4,8,14,11,8,8,5,6,0,0,0,0,0,0,6,10,13,13,14,14,13,9,8,9,10,10,13,14,9,7,6,6,0,0,0,0,0,3,8,14,17,16,16,16,15,14,11,9,10,8,8,7,7,7,8,7,0,0,0,0,0,5,11,16,19,20,20,18,16,14,11,8,6,5,6,9,5,6,7,6,0,0,0,0,0,7,15,18,20,21,21,20,18,14,10,10,7,5,5,7,5,6,6,4,0,0,0,0,11,11,14,17,19,21,25,22,20,18,14,15,12,7,3,6,3,2,2,2,0,0,0,0,8,10,14,18,17,23,26,25,23,22,19,11,8,5,0,2,2,0,0,0,0,0,0,3,4,10,15,19,20,21,25,24,21,19,15,11,9,9,3,1,1,0,0,0,0,0,0,3,8,10,14,16,18,19,25,25,21,19,15,11,5,1,1,0,1,0,0,0,0,0,0,3,6,11,16,17,20,20,22,24,21,15,10,6,0,0,0,0,0,0,0,0,0,0,0,1,7,12,16,17,19,18,22,21,21,15,11,3,0,0,0,0,0,0,0,0,0,0,0,1,10,13,19,22,22,20,15,16,15,13,15,4,0,0,0,0,0,0,0,0,0,0,0,1,12,15,16,19,22,21,17,17,11,10,9,3,0,0,0,0,0,0,0,0,0,0,0,1,12,14,16,18,19,19,15,14,14,9,5,10,2,0,0,0,0,0,0,0,0,0,0,1,12,15,15,18,19,18,15,14,14,9,7,9,3,0,0,0,0,0,0,0],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
