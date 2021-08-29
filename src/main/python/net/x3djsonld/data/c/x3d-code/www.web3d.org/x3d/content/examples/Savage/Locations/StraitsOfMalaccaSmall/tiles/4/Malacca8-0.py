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
        texture=ImageTexture(url=['../../images/4/Malacca8-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[672,759,863,763,578,567,663,819,430,491,319,282,272,268,248,245,209,198,182,160,149,132,758,652,711,778,473,409,392,573,274,468,252,236,245,244,216,216,202,181,171,157,144,136,659,578,657,585,396,406,325,305,249,234,231,201,227,204,216,192,180,162,173,145,136,123,577,432,465,486,381,343,303,281,242,215,190,216,207,172,177,174,157,148,145,136,133,123,479,397,367,389,336,333,299,258,239,201,179,166,169,166,154,171,153,143,132,129,121,114,455,438,354,391,347,322,286,242,216,191,170,155,158,153,162,165,159,146,132,125,112,94,412,335,297,273,312,275,257,248,211,192,167,131,150,111,127,142,138,133,127,110,109,101,407,400,276,279,312,265,241,221,203,180,158,135,132,132,114,133,119,126,121,104,89,84,377,311,281,258,206,261,240,209,184,171,148,131,120,98,100,116,119,103,102,94,89,74,330,335,236,266,198,241,180,186,151,144,138,127,107,90,83,101,103,102,75,87,79,74,325,295,250,213,176,189,195,164,149,135,121,110,89,93,78,80,92,99,82,78,71,71,247,268,220,196,178,176,174,153,116,133,99,84,60,61,72,50,84,75,65,69,72,59,269,209,192,174,152,130,161,108,98,105,85,88,58,65,68,53,80,60,60,47,70,57,250,219,186,180,161,124,148,122,103,92,89,68,61,53,41,42,61,71,50,44,48,42,194,203,162,139,130,125,131,122,105,79,82,74,56,45,59,43,39,49,47,57,53,43,195,192,173,143,117,128,99,115,99,83,84,61,82,50,47,34,34,43,38,38,44,32,180,164,153,145,121,97,79,110,94,83,83,66,63,55,36,41,27,36,35,33,35,36,155,150,142,136,103,102,72,106,90,95,76,70,50,53,51,31,34,30,24,32,30,43,159,128,108,100,96,77,98,78,88,80,70,64,53,50,44,36,34,27,23,23,34,33,153,131,134,108,94,76,62,81,80,76,53,65,47,44,37,34,35,21,19,16,14,17,151,112,114,105,103,68,67,57,74,62,67,49,52,37,32,32,27,24,20,15,16,15,126,124,101,94,104,97,74,57,74,60,53,39,47,43,31,29,30,18,25,12,14,10,123,126,95,89,105,95,80,62,73,61,60,39,46,45,31,26,29,18,26,14,14,9],
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
