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
    GeoLOD(center=(41.49458451554258,-71.39450930681244,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-4.x3d'],child2Url=['../../tiles/5/newport6-5.x3d'],child3Url=['../../tiles/5/newport7-4.x3d'],child4Url=['../../tiles/5/newport7-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,4,5,5,6,8,8,12,13,15,15,16,16,14,11,8,6,0,0,0,0,0,0,0,0,3,4,5,6,6,7,8,10,13,14,14,13,11,9,5,3,0,0,0,0,0,0,0,0,1,2,2,3,3,4,7,8,11,13,13,11,10,7,3,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,5,8,11,12,13,10,8,5,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,11,13,12,9,5,2,0,1,0,0,0,0,3,3,1,0,0,0,0,0,0,0,2,5,10,11,10,7,3,1,0,0,0,0,0,0,5,5,4,0,0,0,0,0,0,0,0,2,6,8,8,5,3,1,0,0,0,0,0,0,5,8,6,3,0,0,0,0,0,0,0,0,3,6,7,7,5,1,0,0,0,0,0,0,3,8,8,5,1,0,0,0,0,0,0,0,0,2,6,7,5,0,0,0,0,0,0,0,0,4,7,5,2,0,0,0,0,0,0,0,0,0,3,4,0,0,0,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,9,9,3,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,16,15,16,16,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,17,16,17,18,13,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
