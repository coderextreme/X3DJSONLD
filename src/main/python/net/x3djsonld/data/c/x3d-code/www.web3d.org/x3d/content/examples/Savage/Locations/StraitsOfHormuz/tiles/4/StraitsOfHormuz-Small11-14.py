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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small11-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.681944553228952,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[263,273,282,266,265,306,309,292,308,322,428,442,371,352,343,363,402,480,509,515,535,616,339,315,287,269,287,288,277,301,319,347,482,395,352,339,335,368,478,480,478,501,620,525,324,317,274,276,280,275,290,302,366,404,500,387,351,316,338,395,456,422,486,574,461,502,356,312,288,277,265,266,288,320,371,437,387,376,302,308,367,345,373,408,584,463,452,362,347,310,285,272,263,270,288,333,425,505,371,366,317,288,358,396,430,481,443,410,360,329,366,327,295,270,254,270,356,407,365,438,333,336,296,319,310,387,391,484,356,323,287,268,379,323,286,266,248,277,304,328,432,408,345,291,287,338,347,368,413,366,312,278,255,237,345,298,280,256,237,271,369,354,411,356,342,275,261,277,325,396,380,303,267,242,218,219,306,275,278,238,246,272,285,345,417,394,315,277,311,289,378,408,323,262,241,216,211,197,318,262,243,228,256,267,299,407,383,333,327,298,252,317,462,347,293,241,224,204,196,195,275,244,220,232,243,324,406,368,383,296,309,231,279,404,422,317,266,219,201,203,190,191,243,227,210,232,264,362,342,285,327,313,304,219,351,436,313,269,227,202,191,178,184,205,218,225,214,230,281,399,366,277,273,251,203,205,331,343,290,249,205,182,177,174,194,188,206,219,214,225,285,365,277,248,207,228,190,269,382,277,252,211,184,176,168,177,178,178,198,180,199,285,341,283,239,229,192,187,226,331,305,233,204,176,166,163,165,185,171,173,182,204,206,315,278,311,248,204,166,173,210,342,252,189,188,155,153,157,160,169,179,193,171,178,222,262,262,296,284,171,161,170,250,252,179,173,147,146,155,163,167,198,280,313,181,176,245,219,318,268,177,150,146,207,265,168,130,136,142,155,161,166,225,310,263,283,250,164,189,235,268,209,155,145,136,202,231,149,129,148,180,157,175,231,245,252,233,249,241,154,173,230,288,175,143,132,147,157,166,145,129,129,138,135,150,189,205,221,222,236,234,142,187,274,195,140,129,124,160,157,116,118,123,122,139,136,198,225,211,234,232,234,189,132,229,237,148,123,119,119,136,116,129,137,125,125,131,156,186,191,216,226,241,245,196,132,237,228,145,122,119,122,134,119,135,137,125,125,130,154,187,191,216,227,238,241],
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
