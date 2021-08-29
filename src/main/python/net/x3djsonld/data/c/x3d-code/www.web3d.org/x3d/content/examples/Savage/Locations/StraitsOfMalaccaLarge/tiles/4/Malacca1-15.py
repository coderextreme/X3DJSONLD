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
        texture=ImageTexture(url=['../../images/4/Malacca1-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-6.704456788552255,107.97275072012073,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[354,274,261,44,32,28,32,40,49,45,25,20,4,8,0,3,0,0,4,2,2,3,102,185,70,49,40,22,24,22,25,15,9,5,0,3,26,2,5,5,15,6,3,3,71,74,60,52,36,42,24,17,10,8,2,2,3,3,0,5,5,0,1,2,2,2,50,43,40,41,24,29,18,13,11,6,2,3,2,2,2,-5,9,4,1,2,2,1,30,31,25,23,25,11,9,11,10,10,10,3,1,4,3,4,4,4,2,2,0,1,25,20,14,13,8,5,7,13,7,10,1,4,3,2,4,6,3,5,3,2,3,1,17,11,9,7,4,1,5,7,4,2,1,3,3,4,3,3,4,3,2,3,2,1,12,9,3,2,1,0,1,2,2,2,4,3,2,3,3,0,2,4,3,2,2,2,7,11,-7,0,1,0,0,0,2,-4,2,2,2,0,1,1,3,5,4,3,3,2,2,0,2,1,1,2,2,1,1,2,1,2,0,1,2,2,3,3,2,3,3,3,2,1,2,2,2,3,1,1,2,2,1,1,2,4,2,3,2,2,3,3,2,3,1,2,2,0,1,2,3,4,0,1,1,2,3,2,1,2,2,2,2,2,2,2,0,3,1,2,2,1,3,2,1,2,3,2,1,1,1,1,1,2,2,2,3,3,0,0,2,2,0,2,0,2,1,2,1,2,2,2,2,1,1,1,1,1,2,1,2,0,0,0,0,0,1,1,1,2,2,2,2,3,2,2,2,0,1,2,1,2,0,-1,0,0,0,1,3,1,1,1,2,2,1,1,1,1,2,1,1,1,2,2,0,0,-2,0,0,1,1,2,2,0,2,2,2,2,1,1,1,1,2,2,2,1,0,1,0,0,2,2,2,1,2,1,2,2,1,2,3,2,2,2,1,0,1,2,0,0,1,0,1,2,2,2,1,2,1,2,1,2,2,2,2,1,0,1,0,1,1,1,1,1,1,2,3,2,2,2,2,2,2,2,2,0,1,0,2,1,1,1,1,1,1,2,1,2,0,0,1,2,0,1,1,1,1,1,0,1,1,1,1,1,1,0,2,2,1,2,1,0,3,2,1,1,1,2,0,1,1,1,1,1,2,1],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
