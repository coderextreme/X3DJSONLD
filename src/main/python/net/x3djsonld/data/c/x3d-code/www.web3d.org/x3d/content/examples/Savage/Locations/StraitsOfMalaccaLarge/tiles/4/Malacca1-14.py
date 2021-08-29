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
        texture=ImageTexture(url=['../../images/4/Malacca1-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-6.704456788552255,106.96200067211268,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1047,1317,1016,790,700,351,243,217,221,385,614,720,732,1164,824,660,453,362,375,406,368,354,809,1662,821,552,411,472,501,251,249,267,447,486,578,587,482,501,566,342,206,119,73,102,822,987,452,476,140,284,658,122,497,218,283,228,254,157,217,282,209,145,80,154,65,71,261,430,348,326,110,206,314,179,272,183,70,95,148,105,143,132,102,80,40,42,44,50,262,393,190,239,84,72,96,94,96,132,68,71,83,80,102,96,66,56,43,31,30,30,118,79,65,66,36,66,53,124,63,33,86,84,54,59,51,49,42,39,26,26,23,25,85,75,58,57,47,44,56,63,39,23,48,53,38,29,22,22,24,25,16,20,16,17,64,54,47,50,34,46,29,37,18,23,20,20,24,25,15,12,12,13,11,12,12,12,41,34,36,32,33,22,14,14,12,16,11,16,17,14,9,5,6,7,8,8,10,7,17,25,21,16,19,9,12,8,8,7,5,5,6,5,3,0,2,1,1,5,3,2,12,14,13,7,9,11,7,6,6,4,1,0,0,0,-3,0,0,1,2,2,3,2,4,0,3,2,4,7,6,11,3,2,1,0,0,-1,-1,0,1,2,1,1,1,1,2,2,4,2,3,2,4,5,4,1,0,0,0,0,0,0,2,1,0,1,1,0,0,3,1,1,4,1,2,2,1,2,0,0,0,0,0,1,0,0,0,0,0,0,2,2,0,3,3,2,1,2,1,1,2,3,1,0,0,1,0,1,0,0,0,2,2,2,0,2,2,2,1,2,1,2,1,1,0,2,2,0,1,1,0,0,0,0,0,0,1,2,1,1,1,1,1,1,0,0,1,2,0,2,5,0,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,2,1,5,2,0,1,0,0,0,0,0,2,3,0,0,0,1,0,1,1,1,2,2,2,1,1,0,0,0,1,1,0,0,0,1,2,1,2,0,0,1,2,2,1,1,0,0,0,0,1,1,1,2,2,1,1,1,0,3,4,2,0,1,0,0,1,0,2,1,1,1,1,1,1,0,1,1,1,2,2,2,2,2,0,1,0,1,1,1,2,0,0,0,1,0,0,1,1,1],
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
