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
        texture=ImageTexture(url=['../../images/4/Malacca11-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.0251734853787395,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[12,12,6,8,6,3,8,5,8,5,4,7,7,6,6,4,4,5,5,5,7,6,24,12,4,5,6,6,4,3,4,6,4,4,7,7,5,5,5,6,5,5,6,3,11,8,4,6,4,5,6,5,7,5,5,5,6,5,6,5,5,6,5,6,6,5,13,8,5,4,5,5,6,3,6,5,5,5,3,5,5,7,6,6,6,5,6,5,28,9,2,5,8,4,7,7,5,7,6,4,6,7,6,5,7,5,5,6,5,6,13,5,4,4,7,7,7,4,4,6,7,6,4,8,6,5,6,6,6,5,6,8,13,4,4,4,5,8,4,2,3,7,6,9,7,6,6,7,5,6,4,6,6,5,12,3,5,6,4,3,4,8,5,7,8,7,5,6,8,8,6,5,4,4,5,5,7,9,7,5,3,7,7,4,5,9,7,5,5,4,8,7,6,6,6,5,5,6,25,14,5,6,5,6,3,6,6,5,7,6,5,8,7,7,7,7,5,8,5,5,14,9,5,4,3,6,7,6,3,5,8,5,7,7,8,6,6,7,7,7,6,7,11,13,11,9,5,7,6,5,5,6,9,5,5,5,4,5,6,7,8,7,5,7,8,17,15,5,4,6,3,7,7,5,5,5,6,6,9,6,6,8,6,6,3,5,22,12,16,8,3,8,7,3,6,7,7,7,5,7,7,7,7,7,6,6,5,6,18,19,15,11,4,6,6,5,5,4,6,6,7,7,6,7,6,7,7,8,4,5,18,9,9,8,11,8,6,6,5,6,5,6,4,5,7,6,8,5,7,6,7,5,13,8,6,17,6,3,7,6,7,6,6,6,5,6,6,7,6,7,7,8,7,8,19,21,10,9,22,9,6,5,5,4,5,5,5,6,6,5,5,6,7,8,5,6,21,27,16,16,8,91,6,5,6,5,6,7,7,7,6,6,5,7,5,5,8,7,9,28,9,5,7,11,4,5,6,4,5,4,6,6,5,6,6,3,5,5,7,6,14,14,4,7,28,11,5,5,7,6,3,6,5,5,8,7,6,4,5,5,6,6,7,4,13,29,119,204,25,6,5,5,4,7,5,7,8,6,5,5,7,7,7,6,9,5,13,32,134,179,32,4,5,4,4,6,5,6,6,7,8,8,6,7,6,7],
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
