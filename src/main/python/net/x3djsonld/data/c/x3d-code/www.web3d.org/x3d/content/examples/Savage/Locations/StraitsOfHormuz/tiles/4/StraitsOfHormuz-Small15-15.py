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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[239,234,236,246,240,246,250,254,259,264,272,277,283,289,296,307,342,405,356,366,378,386,234,231,236,236,239,244,245,252,255,263,269,277,281,291,300,311,325,434,352,364,377,386,232,232,236,236,238,242,246,250,256,262,266,273,281,292,301,315,326,338,345,362,377,388,232,233,232,235,238,239,244,249,253,259,262,271,280,290,301,312,323,334,346,360,375,383,232,230,233,237,238,242,244,245,249,256,261,270,280,289,299,309,319,330,344,357,370,378,231,232,233,235,235,241,242,245,250,255,261,269,277,286,293,304,317,327,339,353,363,371,229,228,233,241,237,238,241,245,250,252,259,268,274,282,288,298,311,323,335,347,357,363,227,231,230,232,235,236,240,244,247,251,257,265,271,280,286,296,307,316,329,341,351,359,229,229,230,238,231,236,238,241,245,248,254,259,269,275,281,292,302,311,323,333,343,346,227,228,228,228,232,234,237,238,243,247,253,257,265,271,278,289,296,306,318,337,334,335,229,226,228,229,229,234,236,240,243,246,250,256,263,269,277,285,291,302,311,333,326,331,229,228,227,227,231,233,250,238,241,246,249,255,261,268,275,283,291,300,309,317,323,329,232,225,226,228,231,241,235,237,238,243,247,253,260,265,273,281,290,299,307,316,322,325,236,225,226,228,230,229,233,235,237,240,247,250,257,263,270,281,288,298,304,312,315,325,241,224,226,226,227,229,230,233,239,239,243,251,255,260,269,278,287,293,301,308,318,325,258,247,222,223,229,227,231,232,234,239,243,247,253,260,265,275,282,304,296,303,306,335,234,220,219,222,225,226,228,230,234,236,241,244,250,256,265,271,279,289,290,295,304,351,214,213,221,222,227,225,227,230,233,235,240,244,247,255,260,267,274,282,284,285,298,327,217,217,219,220,221,223,228,229,230,233,238,242,246,250,256,264,271,274,276,283,288,309,209,213,215,218,221,223,225,228,232,233,236,240,243,249,254,260,265,269,269,269,278,302,222,220,224,219,217,222,223,226,229,232,232,234,240,245,248,253,259,263,260,262,269,318,232,228,228,229,226,227,226,230,233,234,234,240,238,242,246,250,255,258,256,260,289,306,233,228,229,230,227,228,227,230,233,234,234,240,238,241,247,251,255,257,255,261,293,309],
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
