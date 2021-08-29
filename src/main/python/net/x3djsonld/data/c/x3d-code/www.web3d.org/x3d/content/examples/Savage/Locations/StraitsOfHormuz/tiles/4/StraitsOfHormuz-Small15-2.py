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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,55.42775814790765,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[249,214,169,184,191,202,160,158,110,110,103,97,94,161,130,104,132,155,212,311,333,393,227,170,167,196,181,191,153,139,119,93,94,105,92,97,108,117,150,212,310,293,335,311,195,161,161,150,150,155,162,127,143,85,79,73,100,110,129,138,351,350,309,285,323,338,175,155,130,146,165,130,128,118,110,75,78,74,149,217,224,369,436,318,402,278,448,504,178,145,127,135,133,111,101,115,139,76,128,80,303,415,404,437,408,417,270,449,404,427,141,120,120,106,111,104,112,97,101,88,83,143,244,254,288,275,309,308,322,366,400,285,119,139,118,114,101,90,93,93,86,86,85,64,208,219,194,160,188,229,291,245,298,344,118,106,93,96,93,113,95,89,89,134,157,65,120,171,202,200,171,193,181,164,243,235,105,98,93,125,103,103,90,104,124,190,161,134,98,58,158,166,147,155,95,99,105,141,125,112,97,118,101,104,102,197,204,189,164,131,97,78,85,111,109,113,98,82,78,77,123,105,95,144,113,105,147,284,233,188,181,153,143,131,121,86,74,90,73,62,58,55,121,99,108,149,135,108,346,304,283,271,209,161,148,124,104,98,52,72,63,55,50,48,100,129,121,120,176,125,430,366,322,233,190,187,152,127,111,94,73,57,54,50,47,42,105,139,115,124,153,180,478,384,348,231,201,189,158,130,102,84,77,57,50,45,42,41,125,137,123,139,230,231,480,421,336,291,232,185,159,135,101,92,84,68,61,47,43,43,129,136,135,145,176,384,516,431,359,298,245,185,147,124,99,78,74,70,62,57,49,46,153,154,148,157,258,457,482,417,350,291,232,177,129,119,100,89,81,71,60,53,47,47,176,184,149,168,242,567,501,354,297,273,213,150,129,100,95,86,80,67,58,49,45,41,224,194,154,177,374,534,494,403,324,231,189,130,109,97,83,82,70,62,52,45,45,41,225,171,175,215,378,541,456,391,306,214,160,125,106,94,83,74,61,57,49,44,42,40,183,192,204,229,533,481,373,305,248,189,132,117,105,90,80,68,59,50,46,44,42,38,173,201,230,383,463,403,295,243,193,145,123,95,98,82,70,61,58,51,47,43,41,41,174,204,228,410,450,391,296,259,182,141,120,92,96,81,69,61,59,52,46,43,41,41],
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
