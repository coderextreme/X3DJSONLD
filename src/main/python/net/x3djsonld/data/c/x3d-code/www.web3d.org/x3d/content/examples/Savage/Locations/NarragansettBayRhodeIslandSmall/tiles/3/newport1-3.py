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
    GeoLOD(center=(41.486513657765066,-71.32187158681484,0.0),range=4300.153,child1Url=['../../tiles/4/newport2-6.x3d'],child2Url=['../../tiles/4/newport2-7.x3d'],child3Url=['../../tiles/4/newport3-6.x3d'],child4Url=['../../tiles/4/newport3-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=21,zSpacing=0.0016141715,height=[7,0,3,10,15,10,10,14,16,18,18,9,6,5,6,10,12,4,12,14,15,6,0,0,0,2,9,15,15,12,16,16,16,7,2,2,5,11,6,15,15,18,0,0,0,0,0,0,8,10,7,16,24,18,5,0,0,3,3,11,16,14,18,5,0,0,0,0,0,0,0,1,6,11,11,2,0,2,3,3,14,16,16,19,10,7,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,13,16,18,20,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,13,17,18,21,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,10,18,19,20,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,12,20,22,21,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,20,24,22,19,0,0,0,0,0,0,4,0,0,0,0,0,0,0,1,5,12,21,25,22,18,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,7,16,23,25,24,24,0,0,0,0,0,0,0,1,0,0,0,0,0,0,3,7,15,22,27,27,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,11,19,23,26,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,8,15,18,22,24,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,6,7,8,14,18,18,0,0,0,0,0,0,0,0,0,0,0,3,2,2,8,11,10,9,11,16,15,0,0,0,0,0,0,0,0,0,0,0,7,5,5,10,13,14,15,15,17,16,0,0,0,0,0,0,0,0,0,0,0,8,5,5,12,14,15,16,18,19,19,0,0,0,0,0,0,0,0,0,0,1,7,4,4,8,11,14,15,24,23,21,0,0,0,0,0,0,0,0,0,0,0,7,7,9,3,6,8,13,21,27,25,0,0,0,0,0,0,0,0,0,0,0,7,7,9,4,6,8,12,20,27,25],
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
