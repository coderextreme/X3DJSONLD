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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca12-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[9,5,13,32,134,179,32,4,5,4,4,6,5,6,6,7,8,8,6,7,6,7,9,11,21,15,17,15,7,4,6,8,5,6,6,6,5,6,7,6,5,6,7,6,72,11,14,48,14,7,6,5,5,6,7,5,8,7,4,7,7,7,5,7,6,7,54,29,18,93,7,5,5,3,6,6,7,5,7,7,7,6,6,5,5,7,6,8,46,22,18,81,41,6,5,5,6,5,6,6,5,6,7,6,7,8,7,7,7,6,35,18,16,50,53,5,4,5,6,5,7,6,6,5,6,7,7,7,6,4,6,8,39,32,21,82,12,3,4,4,6,5,8,8,8,6,6,6,6,6,6,6,5,6,213,48,27,11,11,3,5,5,4,4,6,6,7,7,8,5,7,6,6,6,5,6,279,56,32,104,9,4,5,5,4,4,5,5,6,7,7,7,7,5,7,9,5,8,335,33,27,197,3,3,5,5,6,4,5,6,5,5,6,5,10,6,6,8,7,8,475,24,14,48,3,6,5,5,5,5,4,4,6,6,8,6,7,8,6,5,7,5,360,71,11,6,5,3,3,5,5,5,5,5,4,3,6,5,7,8,7,5,6,6,188,58,214,7,4,5,5,4,4,6,7,4,6,6,6,4,4,7,7,7,7,5,37,22,169,8,6,3,5,4,4,6,3,4,4,5,4,4,7,5,8,9,6,5,38,21,121,5,6,26,6,5,4,5,4,5,4,5,5,5,6,6,8,4,6,7,20,21,15,8,7,53,5,5,5,6,5,5,5,5,6,4,4,4,6,4,3,5,16,7,13,9,13,1,5,7,4,5,6,6,5,5,5,4,5,5,4,6,6,7,295,18,6,6,5,8,3,5,6,5,4,6,4,5,6,8,5,5,3,6,5,5,123,17,9,11,13,6,5,5,6,5,4,4,4,5,4,4,6,4,4,5,7,4,140,17,7,12,9,4,6,5,6,4,4,7,5,5,4,5,5,3,7,3,4,6,19,9,14,14,4,6,6,7,6,7,5,4,5,4,5,5,4,2,5,5,2,5,16,23,15,12,5,7,6,7,7,4,6,6,4,6,5,6,3,3,2,4,5,4,15,15,11,11,6,8,6,7,6,6,5,6,6,7,5,6,4,3,4,4,2,2],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
