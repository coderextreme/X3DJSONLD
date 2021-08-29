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
    GeoLOD(center=(41.45423022665502,-71.35415501792488,0.0),range=4300.153,child1Url=['../../tiles/4/newport0-4.x3d'],child2Url=['../../tiles/4/newport0-5.x3d'],child3Url=['../../tiles/4/newport1-4.x3d'],child4Url=['../../tiles/4/newport1-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,9,12,10,7,6,1,0,0,0,0,0,0,5,4,0,0,0,0,0,0,0,0,0,2,9,12,10,8,7,2,2,2,2,2,4,0,1,2,0,0,0,0,0,0,0,0,0,6,11,11,11,10,6,4,3,3,4,6,0,0,0,0,0,0,0,0,0,0,0,0,0,10,13,13,12,11,5,3,4,2,7,15,13,11,6,7,0,0,0,0,0,0,0,0,4,10,13,13,13,10,7,4,2,3,14,17,12,16,16,19,0,0,0,0,0,0,0,0,4,10,15,18,14,10,8,9,3,2,9,10,10,10,14,16,0,0,0,0,0,6,6,2,8,11,16,16,14,12,9,11,10,4,2,2,6,10,18,17,0,0,0,0,0,0,8,0,11,15,14,14,14,14,12,12,10,2,2,2,7,23,19,19,0,0,0,0,0,0,8,5,5,17,11,12,12,12,13,10,5,3,2,2,12,17,16,15,0,0,0,0,0,0,0,0,0,11,9,13,12,12,11,8,2,2,3,2,7,11,17,17,0,0,0,0,0,0,0,0,0,0,7,12,18,15,11,9,7,3,2,2,4,7,11,13,0,0,0,0,0,0,0,0,0,0,0,0,14,13,11,10,13,11,7,8,6,4,3,5,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,5,12,14,15,15,11,14,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,11,14,15,16,11,13,10,7],
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
