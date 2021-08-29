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
    GeoLOD(center=(41.5107262310976,-71.39450930681244,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-4.x3d'],child2Url=['../../tiles/5/newport8-5.x3d'],child3Url=['../../tiles/5/newport9-4.x3d'],child4Url=['../../tiles/5/newport9-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[12,17,16,17,18,13,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,17,20,21,23,20,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,18,20,24,25,23,19,14,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,13,20,23,26,26,23,18,12,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,11,14,19,23,25,24,20,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,12,17,17,20,21,19,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,13,13,14,16,16,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,6,5,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,10,11,12,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,11,12,14,16,16,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,12,12,15,19,18,18,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,14,16,18,20,19,22,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,13,18,25,25,23,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,13,18,26,27,24,23,24],
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
