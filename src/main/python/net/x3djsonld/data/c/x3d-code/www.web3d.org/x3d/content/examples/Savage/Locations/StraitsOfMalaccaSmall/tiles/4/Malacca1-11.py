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
        texture=ImageTexture(url=['../../images/4/Malacca1-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[12,14,12,15,31,19,7,3,2,7,6,4,4,4,0,2,5,10,7,42,24,71,9,16,6,84,8,5,3,0,7,4,3,3,4,4,5,43,1,12,13,59,104,19,9,14,4,11,8,18,9,8,4,2,4,3,4,7,8,2,10,3,8,29,9,6,5,7,3,30,10,7,9,21,4,1,2,4,4,4,5,3,7,6,0,6,6,8,3,3,16,86,19,17,25,9,3,3,4,5,3,5,5,1,4,4,5,4,4,7,4,4,9,8,19,4,16,2,2,5,1,2,3,5,2,4,3,3,3,0,3,2,4,4,3,9,14,9,4,1,2,2,2,3,2,5,1,3,2,3,2,4,8,5,2,3,1,3,26,8,10,2,4,2,0,1,3,3,3,3,1,5,2,1,1,0,2,2,2,2,0,5,1,2,2,2,2,4,2,3,3,3,3,5,4,2,5,7,1,1,2,2,0,0,2,1,3,1,0,2,2,2,3,0,3,5,7,4,9,16,4,7,6,14,1,3,1,4,3,1,1,2,1,3,4,3,3,2,4,0,6,50,2,11,8,9,3,1,0,6,3,1,5,1,2,3,2,1,5,1,0,0,5,19,13,23,18,10,0,3,4,1,3,0,3,3,3,3,3,3,2,2,3,-6,17,13,19,29,19,3,3,2,1,3,1,0,2,3,4,3,0,2,4,3,3,1,2,0,6,6,0,5,2,1,1,3,2,2,4,3,3,2,1,0,3,2,3,0,0,1,28,6,3,2,4,3,3,2,0,2,3,2,2,0,2,1,2,1,3,3,2,1,43,0,2,3,1,3,2,0,4,6,2,1,0,0,4,0,1,6,3,4,4,4,102,0,4,2,2,2,3,2,3,0,3,2,0,1,0,-1,6,3,2,3,5,2,61,4,4,1,3,3,3,3,2,7,1,2,4,0,2,3,3,0,1,4,1,0,1,1,3,3,2,3,4,6,0,3,0,1,0,2,2,1,2,1,2,1,3,3,3,142,5,4,2,1,3,1,1,1,0,-1,7,0,2,3,2,0,1,0,8,4,4,117,6,3,2,2,1,2,1,0,2,3,3,4,2,5,2,1,3,1,0,1,4,115,6,4,5,0,0,1,1,-1,1,2,2,4,1,3,1,0,2,1,1,3],
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
