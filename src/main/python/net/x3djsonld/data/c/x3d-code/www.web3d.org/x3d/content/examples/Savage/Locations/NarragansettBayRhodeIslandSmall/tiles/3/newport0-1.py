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
    GeoLOD(center=(41.45423022665502,-71.38643844903493,0.0),range=4300.153,child1Url=['../../tiles/4/newport0-2.x3d'],child2Url=['../../tiles/4/newport0-3.x3d'],child3Url=['../../tiles/4/newport1-2.x3d'],child4Url=['../../tiles/4/newport1-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,16,15,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,19,18,13,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,20,18,16,13,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,22,21,20,16,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,20,19,18,20,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,23,21,21,22,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,22,24,23,20,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,14,18,20,16,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,0,0,9,13,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,7,7,12,18,14,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,11,12,14,15,18,16,0,0,0,0,0,0,0,0,0,0,0,0,0,8,11,15,15,15,19,19,18,0,0,0,0,0,0,0,0,0,0,0,0,0,8,12,15,16,14,18,19,18,0,0,0,0,0,0,0,0],
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
