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
        texture=ImageTexture(url=['../../images/4/Malacca13-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.661298515593056,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[15,15,11,11,6,8,6,7,6,6,5,6,6,7,5,6,4,3,4,4,2,2,23,15,11,8,3,6,5,5,4,7,8,6,4,4,3,4,5,6,4,5,5,5,23,12,11,7,2,4,5,6,8,6,7,3,6,2,5,4,6,5,5,5,6,2,13,12,23,279,8,6,5,5,7,6,6,7,6,6,6,5,6,5,6,6,5,1,16,7,363,320,6,5,6,7,7,5,5,8,8,5,9,5,3,6,7,1,7,8,23,42,73,21,5,4,6,6,6,5,6,7,5,8,5,8,7,10,8,5,9,7,23,37,7,12,5,5,5,6,5,6,6,5,4,6,8,6,6,9,8,6,5,9,26,8,12,1,5,4,5,5,5,6,4,6,5,6,5,5,5,4,5,6,7,5,59,6,11,6,7,6,7,6,4,5,5,5,6,6,6,2,7,4,6,6,5,4,7,13,8,6,6,4,5,5,4,5,3,5,6,5,5,5,6,5,7,7,7,5,13,16,12,9,6,6,5,5,5,5,7,6,3,7,3,5,8,2,1,3,5,8,6,38,12,5,4,4,5,5,5,6,3,5,2,4,4,4,5,4,12,4,6,5,15,10,21,6,5,4,5,5,6,5,6,6,4,7,3,6,4,6,7,10,6,7,27,25,7,7,6,4,5,5,7,5,5,5,6,5,4,5,7,6,9,3,10,7,35,11,7,5,7,7,6,5,5,6,5,7,5,5,5,4,5,6,5,6,6,6,17,13,4,5,6,7,6,5,6,4,5,5,7,5,5,5,5,6,3,3,5,5,12,6,3,7,5,5,7,5,7,3,4,4,2,5,7,10,5,4,9,5,6,4,20,6,5,8,6,6,6,6,5,6,5,4,6,5,7,8,8,3,8,9,6,3,7,6,7,7,7,6,5,5,6,4,5,5,5,4,6,5,8,5,6,9,8,5,5,6,8,7,5,8,8,5,7,5,5,7,6,3,5,4,6,5,6,6,7,5,4,6,7,9,6,7,6,8,6,4,5,6,7,7,4,3,7,5,5,4,5,4,5,6,5,8,8,8,7,8,7,7,7,6,6,3,7,7,5,6,5,5,6,4,6,6,6,6,8,6,6,7,6,6,6,8,5,6,4,7,5,7,5,5,7,5],
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
