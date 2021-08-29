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
    GeoLOD(center=(41.45423022665502,-71.32187158681484,0.0),range=4300.153,child1Url=['../../tiles/4/newport0-6.x3d'],child2Url=['../../tiles/4/newport0-7.x3d'],child3Url=['../../tiles/4/newport1-6.x3d'],child4Url=['../../tiles/4/newport1-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,6,5,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,7,10,8,0,0,0,0,0,5,4,0,0,0,0,0,0,0,4,0,0,0,5,10,11,10,7,6,0,0,6,10,3,0,0,0,0,0,3,7,0,0,0,3,9,9,10,19,12,6,0,2,2,0,0,0,0,0,0,2,8,9,0,0,0,4,7,8,16,14,13,2,3,2,0,0,0,0,0,0,3,6,15,0,0,1,5,6,11,17,18,12,8,0,0,0,0,5,3,0,0,7,10,9,0,0,0,6,8,8,19,27,23,8,9,0,0,0,6,13,0,0,4,10,6,0,0,2,7,10,11,15,24,20,22,19,11,8,6,3,11,11,0,4,11,13,0,0,3,7,13,14,17,16,21,24,29,16,17,0,4,11,15,0,0,10,12,5,0,4,8,12,16,13,18,13,20,27,22,11,5,16,15,16,10,8,12,15,9,5,2,7,11,13,5,17,11,17,26,22,12,15,21,17,17,15,12,10,10,13,6,3,11,14,14,7,0,10,12,16,11,9,14,16,18,18,9,6,6,5,10,11,4,12,13,14,7,0,3,10,15,10,10,14,16,18,18,9,6,5,6,10,12,4,12,14,15],
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
