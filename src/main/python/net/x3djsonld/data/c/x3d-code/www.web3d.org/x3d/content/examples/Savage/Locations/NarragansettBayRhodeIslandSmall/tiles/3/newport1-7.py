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
    GeoLOD(center=(41.486513657765066,-71.19273786237466,0.0),range=4300.153,child1Url=['../../tiles/4/newport2-14.x3d'],child2Url=['../../tiles/4/newport2-15.x3d'],child3Url=['../../tiles/4/newport3-14.x3d'],child4Url=['../../tiles/4/newport3-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport1-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,4,1,2,1,1,1,2,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,4,5,2,1,1,3,5,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,3,2,1,3,4,6,9,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,1,2,4,6,9,9,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,4,8,7,7,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,3,4,5,7,6,6,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,3,5,8,8,4,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,3,2,3,3,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,5,3,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,4,4,5,8,9,7,4,4,0,0,0,0,0,0,0,0,0,0,0,5,8,9,8,4,5,6,9,12,9,5,4,4,0,0,0,0,0,0,0,0,0,0,3,6,8,10,7,7,4,7,14,14,10,6,4,4,0,0,0,0,0,0,0,0,0,3,4,5,7,11,9,10,10,11,15,14,10,6,6,6,0,0,0,0,0,0,0,0,3,5,8,9,12,11,11,14,16,17,16,13,9,8,8,8,0,0,0,0,0,0,0,0,3,7,9,11,13,11,12,14,17,18,14,11,10,10,10,9,0,0,0,0,0,0,0,0,4,9,11,11,12,15,14,16,19,18,15,12,12,13,11,10,0,0,0,0,0,0,1,4,4,8,11,15,18,16,16,19,21,18,14,14,15,13,12,11,0,0,0,3,3,2,4,8,9,9,11,14,18,17,16,18,21,19,17,18,17,15,14,13,0,0,0,5,5,7,8,10,12,11,12,15,16,16,16,17,19,21,21,19,17,14,13,13,0,0,0,5,6,7,9,11,12,11,12,15,16,16,16,17,19,21,21,20,17,14,13,13],
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
