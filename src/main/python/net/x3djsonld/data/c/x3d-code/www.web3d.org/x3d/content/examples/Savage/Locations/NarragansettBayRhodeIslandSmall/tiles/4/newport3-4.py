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
    GeoLOD(center=(41.49458451554258,-71.36222587570239,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-8.x3d'],child2Url=['../../tiles/5/newport6-9.x3d'],child3Url=['../../tiles/5/newport7-8.x3d'],child4Url=['../../tiles/5/newport7-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[24,25,25,23,19,14,9,6,5,4,4,4,5,3,0,0,0,0,0,0,0,0,0,22,24,24,23,20,16,8,4,3,3,3,4,4,2,0,0,0,0,0,0,0,0,0,24,24,23,24,23,20,11,4,1,2,2,1,0,0,0,0,0,0,0,0,0,0,0,26,24,22,22,22,22,15,6,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,26,24,22,20,20,21,18,9,5,4,1,0,0,0,0,0,0,0,0,0,0,0,0,24,22,21,20,20,19,18,13,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,22,21,21,22,21,18,15,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,21,21,22,19,17,13,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,19,18,17,17,16,13,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,18,17,16,15,13,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,17,16,14,12,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,16,14,12,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,16,12,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,14,10,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,9,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,10,8,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,10,8,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,11,9,6,4,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,13,11,7,5,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,16,13,10,7,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,17,15,12,8,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,19,15,12,10,8,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,19,17,14,12,11,8,6,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,20,18,17,15,14,12,9,8,6,3,2,0,0,0,0,0,0,0,0,0,0,0,0],
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
