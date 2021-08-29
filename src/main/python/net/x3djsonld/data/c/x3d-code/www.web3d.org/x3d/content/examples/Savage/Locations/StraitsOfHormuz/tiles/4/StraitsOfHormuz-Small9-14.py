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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small9-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.457754674260052,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[33,42,34,36,33,35,37,38,44,49,78,75,90,112,208,205,209,221,215,186,231,275,51,27,31,35,35,35,38,40,41,49,90,75,80,125,171,216,168,200,178,192,208,254,143,31,27,33,36,37,40,43,43,54,75,80,70,75,179,223,147,190,158,187,196,176,73,60,30,32,35,37,42,42,45,56,88,66,67,72,139,114,102,119,125,143,144,143,61,89,33,35,35,38,40,44,46,54,65,63,81,125,83,113,192,172,144,158,162,193,96,70,36,34,38,37,37,45,51,63,97,66,115,121,123,288,243,308,294,220,220,327,63,47,39,33,39,40,43,41,54,74,127,74,191,134,156,193,270,352,284,296,382,408,90,40,36,39,38,43,43,46,59,88,136,134,187,116,182,193,333,374,291,325,385,375,50,39,42,39,43,42,48,51,64,102,93,76,164,134,228,270,359,391,335,424,380,346,45,44,43,39,44,45,48,55,70,101,87,71,120,139,187,279,340,391,374,380,320,319,46,44,45,44,48,48,52,66,88,128,148,79,100,129,188,292,326,356,346,335,332,305,46,50,49,44,48,55,57,74,111,165,79,86,141,238,253,223,202,330,281,322,347,374,47,52,47,50,48,55,63,81,127,103,78,89,150,184,251,131,118,224,265,326,350,323,53,53,52,50,54,64,65,89,83,84,79,82,131,116,133,123,191,157,217,306,295,240,57,53,54,58,67,76,69,75,90,112,182,140,90,121,118,164,193,148,221,290,193,197,58,59,64,73,81,103,72,95,165,214,262,158,167,155,213,283,202,175,277,193,198,236,63,67,78,97,121,84,110,160,250,232,220,113,169,205,273,320,296,222,150,163,217,213,68,86,130,127,97,101,88,191,223,173,149,118,185,281,319,374,373,278,160,170,202,243,85,112,103,107,146,163,117,130,176,144,126,140,187,251,321,397,321,227,156,171,205,253,137,88,92,175,144,178,125,124,136,151,147,155,226,321,344,390,310,185,176,190,229,277,122,93,170,173,182,189,132,136,137,165,155,173,240,260,327,355,256,175,171,200,250,292,140,138,137,134,146,186,147,193,158,170,166,180,254,340,333,389,234,184,175,174,202,274,135,128,135,132,147,186,149,202,159,165,164,179,249,336,333,386,237,184,177,175,202,282],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
