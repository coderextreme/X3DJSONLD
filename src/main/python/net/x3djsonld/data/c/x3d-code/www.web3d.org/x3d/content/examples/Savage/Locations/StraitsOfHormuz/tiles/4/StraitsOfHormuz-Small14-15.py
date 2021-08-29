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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[278,298,332,276,290,288,316,335,364,382,382,396,396,395,411,417,433,443,461,468,491,501,284,319,296,274,293,290,310,329,350,364,356,370,389,389,406,414,415,437,457,473,487,491,318,347,305,275,272,295,308,321,324,355,374,384,383,393,397,403,421,438,455,468,480,484,319,287,263,257,276,289,308,334,362,385,380,370,374,383,398,410,425,438,451,470,472,476,311,286,252,261,286,349,347,351,348,368,391,362,370,383,395,410,422,436,446,454,464,472,301,264,247,266,331,337,349,329,353,371,367,363,373,381,391,407,420,429,437,444,453,460,284,258,250,291,314,309,347,337,326,345,362,364,369,376,388,399,410,419,430,434,442,444,259,237,267,287,295,326,328,313,327,358,352,355,361,373,383,392,402,413,422,425,430,432,248,248,282,274,292,293,300,308,336,352,347,349,355,366,375,386,394,405,413,414,415,418,236,256,276,302,335,313,300,312,338,341,340,340,353,359,368,376,385,394,400,402,401,404,255,265,303,299,321,344,323,337,335,327,331,334,346,355,363,372,379,384,390,393,394,402,273,285,283,305,328,347,348,336,338,325,323,330,338,348,355,363,371,374,379,383,395,401,248,276,285,296,329,330,321,312,313,319,318,322,332,343,350,356,361,366,378,466,400,430,292,274,291,304,324,299,314,311,304,311,311,319,325,332,342,347,353,359,367,408,485,535,290,288,284,302,298,290,294,302,303,299,308,311,321,326,332,340,347,354,371,413,516,509,270,294,294,293,281,295,277,279,290,295,297,306,313,319,328,335,341,345,385,520,536,519,280,287,298,259,265,279,279,283,285,288,292,300,306,315,324,329,333,341,444,521,472,524,247,268,276,251,275,260,263,272,276,279,285,295,303,311,318,323,326,334,369,433,469,450,232,233,243,259,288,254,262,267,271,276,284,291,295,306,311,316,321,330,387,408,492,434,251,234,239,248,244,252,255,260,266,272,279,288,293,299,306,309,312,384,406,397,412,436,267,233,237,239,248,247,252,257,262,267,273,282,287,295,300,303,307,465,376,382,400,385,240,233,235,245,241,245,249,255,259,264,273,277,284,289,295,307,343,391,356,366,378,386,239,234,236,246,240,246,250,254,259,264,272,277,283,289,296,307,342,405,356,366,378,386],
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
