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
    GeoLOD(center=(41.49458451554258,-71.31380072903733,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-14.x3d'],child2Url=['../../tiles/5/newport6-15.x3d'],child3Url=['../../tiles/5/newport7-14.x3d'],child4Url=['../../tiles/5/newport7-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,1,3,7,10,14,17,20,21,23,26,25,24,23,23,0,0,0,0,0,0,0,0,0,0,0,3,6,9,14,19,21,23,25,25,24,24,24,24,0,0,0,0,0,0,0,0,0,0,0,2,6,11,15,18,21,24,27,27,27,26,25,25,0,0,0,0,0,0,0,0,0,0,3,3,7,11,15,17,21,23,27,28,28,27,26,26,0,0,0,0,0,0,0,0,0,0,3,3,6,9,12,15,18,22,25,26,27,26,26,26,0,0,0,0,0,0,0,0,0,1,2,3,5,7,11,13,17,20,23,24,26,26,27,27,0,0,0,0,0,0,0,0,0,0,3,3,4,6,10,12,15,18,21,23,24,25,27,27,0,0,0,0,0,0,0,0,0,0,2,2,2,4,8,10,14,17,19,20,22,23,25,25,0,0,0,0,0,0,0,0,0,0,2,2,3,4,8,9,12,14,16,18,19,21,22,22,0,0,0,0,2,1,0,0,0,0,2,3,4,6,7,8,10,11,14,16,17,20,20,20,0,0,0,2,2,2,2,2,1,0,2,5,6,6,6,8,9,9,12,14,16,18,18,18,0,0,0,2,2,2,2,2,2,3,5,7,9,8,8,8,9,9,11,12,15,17,18,18,0,0,0,3,2,2,2,2,2,4,8,10,11,10,10,9,9,9,10,11,14,16,17,18,0,0,2,5,4,3,2,2,2,5,8,11,11,11,11,11,10,9,10,12,13,15,17,18,0,0,3,6,6,5,3,3,4,7,10,11,12,13,13,13,13,14,14,14,15,16,18,18,0,0,4,7,7,7,4,4,6,8,11,13,13,14,15,15,15,15,15,15,16,18,18,18,0,0,5,8,7,6,4,4,6,9,14,15,14,15,14,15,16,17,16,16,18,19,18,18,0,0,5,8,8,6,5,4,6,10,12,13,14,16,15,15,14,16,17,19,19,20,21,21,0,0,4,8,7,5,4,4,5,8,9,11,12,14,15,15,14,15,18,21,22,21,21,21,0,1,5,7,6,4,3,4,4,6,8,10,10,11,12,14,15,15,18,24,26,23,22,22,0,1,5,6,6,4,3,5,5,6,7,7,8,9,10,12,13,15,19,23,26,25,25,24,0,0,4,7,8,6,8,8,8,5,3,5,6,8,8,9,10,14,17,21,25,27,28,28,0,0,6,10,7,7,8,7,9,6,6,4,5,4,6,8,10,13,17,20,23,27,28,28,0,0,5,9,6,6,8,9,9,7,6,3,4,3,6,8,10,13,17,19,23,26,28,28],
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
