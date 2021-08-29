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
    GeoLOD(center=(41.486513657765066,-71.35415501792488,0.0),range=4300.153,child1Url=['../../tiles/4/newport2-4.x3d'],child2Url=['../../tiles/4/newport2-5.x3d'],child3Url=['../../tiles/4/newport3-4.x3d'],child4Url=['../../tiles/4/newport3-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,11,14,15,16,11,13,10,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,16,19,17,7,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,17,18,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,10,10,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,12,10,5,4,11,18,11,0,4,0,5,0,0,0,0,0,0,0,0,0,0,0,0,1,7,6,26,30,26,21,15,8,2,6,7,3,5,0,0,0,0,0,0,0,0,0,0,0,2,3,29,28,29,24,17,14,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,25,23,23,24,16,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,24,17,12,10,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,24,19,4,3,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,21,22,11,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,21,19,15,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,19,17,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,14,8,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,15,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
