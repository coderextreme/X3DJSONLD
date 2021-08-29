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
    GeoLOD(center=(41.486513657765066,-71.25730472459475,0.0),range=4300.153,child1Url=['../../tiles/4/newport2-10.x3d'],child2Url=['../../tiles/4/newport2-11.x3d'],child3Url=['../../tiles/4/newport3-10.x3d'],child4Url=['../../tiles/4/newport3-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport1-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=21,zSpacing=0.0016141715,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,10,11,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,8,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,15,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,3,19,14,10,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,1,2,22,20,14,10,0,0,0,0,0,0,0,0,0,1,3,1,1,1,0,0,0,26,24,19,13,0,0,0,0,0,0,0,3,2,0,1,1,1,0,0,0,0,32,29,26,15,1,0,0,1,2,0,2,0,0,0,0,0,0,0,0,0,0,40,36,24,12,2,2,2,0,2,1,0,0,0,0,0,2,2,0,0,0,0,39,36,28,15,2,3,0,0,12,8,2,0,0,0,-1,4,4,0,0,0,0,41,36,28,15,5,7,2,0,0,20,13,0,0,0,5,7,6,3,0,0,0,41,37,28,17,11,11,16,2,5,12,20,7,4,4,14,14,13,13,7,0,0,44,35,27,17,15,18,29,19,16,4,12,12,12,14,22,22,18,20,21,1,1,42,36,28,20,22,22,26,31,29,17,13,10,13,20,24,26,22,26,28,23,0,40,34,26,24,20,25,32,39,34,30,17,11,14,18,26,26,29,29,31,25,11,41,34,27,24,21,26,32,38,34,32,18,11,14,17,25,25,29,29,31,25,12],
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
