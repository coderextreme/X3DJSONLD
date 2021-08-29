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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ElevationGridNonPlanarQuadrilaterals.x3d',name='title'),
    meta(content='Show how a single nonplanar quadrilateral can be tesselated in 2 different ways.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='U.S. Naval Postgraduate School (NPS)',name='organization'),
    meta(content='28 August 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ElevationGridNonPlanarQuadrilaterals.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ElevationGridNonPlanarQuadrilaterals.x3d'),
    NavigationInfo(DEF='ExamineMode'),
    NavigationInfo(DEF='FlyPanNavigation',type=["FLY","ANY"]),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Book View',orientation=(0,1,0,0.01),position=(0.13,0.2,7.71)),
    Viewpoint(DEF='DefaultView',description='ElevationGrid tessellation examples',position=(0,0.2,10)),
    ROUTE(fromField='isBound',fromNode='DefaultView',toField='set_bind',toNode='FlyPanNavigation'),
    Transform(translation=(0,-0.75,0),
      children=[
      Transform(DEF='FigureElevationGridBack',translation=(-4,0,0),
        #  Note that the base of each piece of polygonal geometry is based at (1 0 1) 
        children=[
        Viewpoint(description='Default brower ElevationGrid tessellation, front view',position=(1.5,0.4,4)),
        Transform(center=(1,0,1),rotation=(0,1,0,3.2),
          children=[
          Group(DEF='DefaultElevationGrid',
            children=[
            Shape(DEF='ExampleElevationGridShape',
              geometry=ElevationGrid(height=[0,0.5,0,0],solid=False),
              appearance=Appearance(DEF='DiffuseRedAppearance',
                material=Material(diffuseColor=(0.9,0.1,0.1),transparency=0.1))),
            Transform(DEF='FigureLabelBrowserElevationGrid',translation=(0.5,1,0.5),
              children=[
              Billboard(
                children=[
                Shape(
                  geometry=Text(string=["Browser","ElevationGrid"],
                    fontStyle=FontStyle(DEF='CenterFS',justify=["MIDDLE","MIDDLE"],size=0.25)),
                  appearance=Appearance(DEF='LabelAppearance',
                    material=Material(diffuseColor=(0.2,0.1,0.8))))])]),
            Group(DEF='CommonFigureElements',
              children=[
              Shape(DEF='QuadOutlineShape',
                geometry=IndexedLineSet(colorIndex=[0,0,0,0],colorPerVertex=False,coordIndex=[0,1,3,2,0,-1],
                  #  first iterate on x-axis, then z-xis 
                  coord=Coordinate(DEF='QuadrilateralPoints',point=[(0,0,0),(1,0.5,0),(0,0,1),(1,0,1),(1,0,0)]),
                  color=Color(DEF='White',color=[(1,1,1)]))),
              Shape(DEF='FloorShape',
                #  setting all height values to zero is a simple way to get a square outline. A more efficient way is to use an IndexedFaceSet. 
                geometry=ElevationGrid(solid=False),
                appearance=Appearance(DEF='TransparentGreyAppearance',
                  material=Material(diffuseColor=(0,0,0),transparency=0.8))),
              Transform(DEF='PointLabels',translation=(0,-0.2,0),
                children=[
                Billboard(
                  children=[
                  Shape(
                    geometry=Text(string=["h0"],
                      fontStyle=FontStyle(USE='CenterFS')),
                    appearance=Appearance(USE='LabelAppearance'))]),
                Transform(translation=(1,0,0),
                  children=[
                  Billboard(
                    children=[
                    Shape(
                      geometry=Text(string=["h1"],
                        fontStyle=FontStyle(USE='CenterFS')),
                      appearance=Appearance(USE='LabelAppearance'))])]),
                Transform(translation=(0,0,1),
                  children=[
                  Billboard(
                    children=[
                    Shape(
                      geometry=Text(string=["h2"],
                        fontStyle=FontStyle(USE='CenterFS')),
                      appearance=Appearance(USE='LabelAppearance'))])]),
                Transform(translation=(1,0,1),
                  children=[
                  Billboard(
                    children=[
                    Shape(
                      geometry=Text(string=["h3"],
                        fontStyle=FontStyle(USE='CenterFS')),
                      appearance=Appearance(USE='LabelAppearance'))])])]),
              Shape(DEF='QuadVerticalLineShape',
                geometry=IndexedLineSet(colorIndex=[0,0,0,0],colorPerVertex=False,coordIndex=[1,4,-1],
                  coord=Coordinate(USE='QuadrilateralPoints'),
                  color=Color(USE='White')))]),
            Shape(DEF='QuadCrossDiagonalLineShape',
              geometry=IndexedLineSet(colorIndex=[0,0,0,0],colorPerVertex=False,coordIndex=[2,1,-1],
                coord=Coordinate(USE='QuadrilateralPoints'),
                color=Color(USE='White'))),
            Shape(DEF='QuadCenterDiagonalLineShape',
              geometry=IndexedLineSet(colorIndex=[0,0,0,0],colorPerVertex=False,coordIndex=[0,3,-1],
                coord=Coordinate(USE='QuadrilateralPoints'),
                color=Color(USE='White')))])])]),
      Transform(DEF='FigureElevationGridFront',translation=(-1,0,0),
        children=[
        Viewpoint(description='Default brower ElevationGrid tessellation, back view',position=(0.5,0.4,4)),
        Transform(center=(1,0,1),rotation=(0,1,0,0.8),
          children=[
          Group(USE='DefaultElevationGrid')])]),
      Transform(DEF='FigureIfsCenterDiagonal',translation=(1,0,0),
        children=[
        Viewpoint(description='Center-diagonal tessellation',position=(0.5,0.4,4)),
        Transform(center=(1,0,1),rotation=(0,1,0,0.4),
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,3,1,-1,0,2,3,-1],
              coord=Coordinate(USE='QuadrilateralPoints')),
            appearance=Appearance(USE='DiffuseRedAppearance')),
          Transform(DEF='FigureLabelCenterDiagonalTessellation',translation=(0.5,1,0.5),
            children=[
            Billboard(
              children=[
              Shape(
                geometry=Text(string=["Center Diagonal","Tessellation"],
                  fontStyle=FontStyle(USE='CenterFS')),
                appearance=Appearance(USE='LabelAppearance'))])]),
          Group(USE='CommonFigureElements'),
          Shape(USE='QuadCenterDiagonalLineShape')])]),
      Transform(DEF='FigureIfsCrossDiagonal',translation=(3,0,0),
        children=[
        Viewpoint(description='Cross-diagonal tessellation',position=(0.5,0.4,4)),
        Transform(center=(1,0,1),
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,2,1,-1,2,3,1,-1],
              coord=Coordinate(USE='QuadrilateralPoints')),
            appearance=Appearance(USE='DiffuseRedAppearance')),
          Transform(DEF='FigureLabelCrossDiagonalTessellation',translation=(0.5,1,0.5),
            children=[
            Billboard(
              children=[
              Shape(
                geometry=Text(string=["Cross Diagonal","Tessellation"],
                  fontStyle=FontStyle(USE='CenterFS')),
                appearance=Appearance(USE='LabelAppearance'))])]),
          Group(USE='CommonFigureElements'),
          Shape(USE='QuadCrossDiagonalLineShape')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ElevationGridNonPlanarQuadrilaterals.py")
