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
        texture=ImageTexture(url=['../../images/4/bosphorus3-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.788909617338845,29.55022386869132,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[83,85,81,135,161,124,128,154,139,153,176,188,162,213,230,249,209,145,83,20,30,41,120,147,90,142,203,171,127,124,133,151,170,192,200,249,286,293,282,200,134,67,80,97,114,141,142,130,208,198,152,153,147,162,183,204,226,270,302,323,315,250,200,149,104,121,109,145,169,141,200,209,185,179,180,193,208,232,273,293,309,333,349,332,258,203,153,166,130,180,191,162,194,234,215,203,214,233,255,277,299,305,306,322,326,303,298,239,208,206,144,200,214,216,179,220,232,225,209,243,284,262,286,296,283,277,272,280,301,305,254,246,159,201,228,219,193,186,189,197,203,223,261,240,241,247,252,255,255,270,306,363,300,292,144,194,232,220,210,222,208,211,234,213,218,218,224,233,254,248,258,294,315,374,348,343,204,212,231,246,254,259,259,238,276,252,227,228,277,268,246,248,256,285,317,349,388,391,224,251,250,269,276,276,273,276,267,242,286,267,227,252,276,264,278,276,300,347,359,359,230,250,262,284,290,300,289,279,274,284,287,286,236,246,296,286,312,313,293,324,344,342,260,264,273,287,302,312,292,292,287,294,290,282,245,253,290,304,294,297,300,307,325,326,264,264,271,290,305,322,298,318,305,310,294,289,270,241,296,324,323,307,291,311,369,375,252,258,295,314,324,317,303,313,317,311,309,296,265,241,256,279,299,319,308,306,368,383,231,265,301,321,338,321,324,311,323,320,312,300,262,258,250,271,263,282,317,313,335,348,213,242,264,287,321,317,325,330,321,302,267,250,246,252,275,280,282,275,286,293,309,318,226,255,274,273,284,301,311,335,313,280,278,288,260,251,308,314,327,321,325,311,302,307,238,278,304,324,311,318,311,319,338,332,319,302,278,258,293,324,342,353,362,341,320,325,249,273,289,308,323,336,320,322,340,352,358,339,337,305,253,274,277,303,351,313,345,356,274,271,286,302,334,339,329,323,322,338,358,360,349,304,254,259,259,262,270,281,289,293,277,297,315,326,349,340,330,326,319,318,333,352,348,289,255,257,259,264,265,273,278,278,243,269,298,346,366,350,338,333,325,312,323,332,315,290,262,256,262,288,289,267,275,278,219,229,254,320,355,369,360,354,338,348,320,291,283,277,278,256,261,265,293,295,274,278,219,229,253,311,350,371,365,360,340,353,328,292,279,283,286,256,261,264,284,296,273,277],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
