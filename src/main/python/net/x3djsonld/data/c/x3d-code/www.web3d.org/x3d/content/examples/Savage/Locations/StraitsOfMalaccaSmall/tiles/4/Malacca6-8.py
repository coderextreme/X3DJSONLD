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
        texture=ImageTexture(url=['../../images/4/Malacca6-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[32,31,34,27,50,84,52,47,51,57,56,80,96,105,81,109,235,91,76,43,44,77,15,24,63,38,55,66,72,66,60,62,71,50,72,67,91,161,164,66,85,90,44,61,32,55,88,47,48,69,68,72,89,65,81,57,56,68,83,133,389,175,72,74,107,79,52,52,83,43,116,50,68,95,75,90,90,67,91,69,74,90,254,92,80,70,80,96,30,42,73,54,108,76,71,127,115,96,108,98,101,78,80,117,155,97,68,74,57,93,46,52,39,47,384,415,71,184,80,91,96,141,247,96,102,82,76,77,74,75,59,86,49,42,39,141,627,537,71,87,169,173,160,259,250,86,66,69,91,113,61,72,54,69,23,99,43,71,482,367,199,112,213,111,220,287,291,88,60,71,57,77,57,54,44,66,41,39,49,322,584,236,207,141,160,164,191,320,118,73,61,51,66,57,62,50,74,80,47,47,125,624,709,464,137,139,185,154,238,251,136,123,64,53,49,50,56,60,74,73,58,251,335,516,697,483,174,118,152,189,157,109,120,81,84,57,57,71,64,35,42,60,47,137,419,444,438,490,178,150,163,164,125,122,132,204,61,68,99,57,53,69,36,45,80,400,221,277,227,337,216,130,168,208,163,148,115,227,59,67,65,83,82,50,54,36,492,757,283,605,214,158,153,125,145,209,110,212,128,153,65,69,77,58,50,48,71,57,717,756,373,724,547,349,135,307,136,127,100,120,124,123,104,72,72,73,68,54,60,39,564,265,227,704,820,327,205,212,135,105,97,88,177,125,97,111,83,77,60,56,49,40,404,129,136,364,660,671,297,360,174,131,140,82,110,95,164,93,90,63,93,69,55,60,704,200,236,153,315,337,362,286,135,126,122,112,110,118,102,86,124,91,59,82,59,53,633,327,116,156,124,121,171,133,183,148,130,100,120,116,133,85,115,90,66,57,52,70,824,455,157,106,191,214,114,114,174,137,125,99,73,93,85,73,71,91,75,44,66,102,448,283,198,118,211,161,121,127,158,161,128,139,89,75,67,77,74,54,69,80,77,100,125,162,117,143,89,111,96,96,132,140,194,107,112,71,49,70,59,79,68,72,90,77,116,162,111,137,88,118,94,100,119,141,180,108,107,74,46,77,76,86,69,75,84,83],
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
