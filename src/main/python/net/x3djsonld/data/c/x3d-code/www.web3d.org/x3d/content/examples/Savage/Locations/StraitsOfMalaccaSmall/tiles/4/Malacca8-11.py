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
        texture=ImageTexture(url=['../../images/4/Malacca8-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[21,21,29,13,5,5,4,2,4,3,4,4,5,3,4,4,4,5,4,4,5,6,28,25,29,8,6,5,5,5,3,2,3,3,4,3,6,4,3,6,4,3,4,3,30,7,5,7,4,6,5,6,2,2,3,4,2,2,5,4,4,5,4,5,4,5,9,27,16,4,4,7,5,6,6,6,3,4,2,3,3,3,4,5,4,3,2,4,10,9,25,14,5,5,4,4,5,5,4,5,4,5,3,4,4,5,6,4,4,6,9,8,6,16,4,4,5,5,4,6,3,4,5,3,2,4,2,3,3,5,5,5,10,9,8,10,4,6,5,5,3,5,5,8,5,4,4,2,3,3,4,5,4,4,11,31,9,10,3,5,4,3,4,5,3,4,5,5,3,3,3,4,4,4,5,4,30,15,15,12,5,5,4,4,4,5,4,6,5,5,6,4,5,3,2,4,5,4,12,17,9,5,3,5,4,6,3,6,6,4,5,5,6,5,6,4,4,2,3,3,10,14,28,15,5,4,4,5,4,5,5,4,4,5,5,4,6,7,5,4,6,3,30,18,28,6,4,4,6,4,4,6,4,5,5,3,5,4,5,5,6,6,3,3,19,7,9,9,5,4,4,4,5,4,4,4,5,5,5,5,7,5,5,5,3,3,21,7,7,5,5,5,4,6,2,5,4,5,4,4,6,4,6,6,7,6,6,3,9,8,15,6,5,4,6,5,5,4,6,4,4,4,6,5,4,5,7,6,6,5,9,8,8,8,5,5,5,5,3,4,4,5,5,5,3,5,4,4,4,7,6,6,12,9,7,4,7,5,5,5,3,3,6,4,4,4,5,5,6,6,5,5,5,6,19,15,8,6,4,6,7,5,5,5,4,5,4,6,5,5,6,4,5,4,4,4,31,11,9,4,7,6,5,5,3,4,6,3,5,5,4,6,5,5,4,5,5,5,12,10,10,4,5,3,5,6,6,6,4,6,5,5,5,4,5,5,5,6,4,4,28,14,7,5,5,3,5,5,5,6,2,4,4,5,4,5,5,4,6,5,4,5,12,11,14,5,7,5,5,6,6,6,4,5,5,5,3,4,4,6,5,5,3,5,13,12,13,4,6,5,4,6,6,6,3,6,3,6,3,4,5,5,5,5,6,5],
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
