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
        texture=ImageTexture(url=['../../images/4/Malacca13-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.661298515593056,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[644,823,283,44,48,183,267,56,105,141,46,62,175,35,75,17,125,61,31,26,89,15,963,795,502,40,44,42,82,88,39,99,78,68,304,50,67,37,259,31,24,42,76,23,795,657,285,66,46,48,121,71,65,42,61,83,41,27,64,17,209,27,14,11,105,23,333,407,477,89,54,41,87,83,49,41,87,272,48,27,68,17,153,45,18,17,7,13,146,124,118,105,35,47,78,30,146,109,161,157,35,18,57,21,251,41,64,17,11,16,292,418,108,49,46,39,101,55,90,93,270,59,23,31,85,26,56,49,19,29,18,23,519,687,148,64,47,42,34,71,25,70,166,62,40,20,40,38,29,21,21,31,24,23,681,651,145,71,74,64,65,23,23,77,60,41,40,28,27,8,26,24,47,29,22,26,883,585,148,139,77,152,56,41,56,139,86,176,28,21,11,15,16,63,43,59,54,59,701,635,539,75,62,56,66,35,29,81,175,81,27,37,11,19,46,48,51,33,174,7,694,312,257,70,53,47,51,93,76,83,33,69,15,24,22,12,40,75,25,23,17,13,600,688,237,107,63,72,130,55,113,105,23,22,30,82,28,23,12,18,12,7,101,6,761,301,72,115,74,115,205,52,277,45,31,29,23,19,50,17,13,17,17,43,13,15,388,271,92,336,254,85,75,91,138,23,48,22,53,23,16,23,26,25,24,23,15,27,475,240,377,232,145,64,77,142,78,48,34,22,25,24,27,31,32,44,30,26,16,35,300,230,346,76,66,62,120,113,32,41,51,38,24,33,24,33,34,29,31,36,15,17,457,291,339,81,51,53,86,118,68,61,43,53,19,31,22,34,32,30,167,15,10,12,487,404,50,79,123,33,56,55,55,45,43,27,31,33,16,26,60,33,27,13,43,20,635,362,43,62,286,90,44,50,49,33,31,37,27,22,28,24,29,31,12,10,33,7,291,83,140,153,40,43,37,56,48,70,31,34,28,18,26,29,16,23,14,11,19,5,135,40,292,310,95,34,52,37,53,193,32,25,19,33,26,22,12,5,14,13,15,4,71,32,44,176,34,49,61,178,108,273,41,37,17,22,9,24,34,20,7,13,7,5,83,32,42,174,31,46,60,211,110,247,35,33,14,25,9,25,38,23,8,12,6,6],
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
