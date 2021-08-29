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

newModel=X3D(profile='Interchange',version='4.0',
  head=head(
    children=[
    component(level=1,name='Text'),
    component(level=2,name='Grouping'),
    component(level=3,name='Navigation'),
    meta(content='X3dMeshDesignPattern.x3d',name='title'),
    meta(content='Candidate design pattern for 3D scanner outputs to consistently define the elements of an X3D mesh.',name='description'),
    meta(content='Don Brutzman, Vince Marchetti, Roy Walmsley, Nicholas Polys',name='creator'),
    meta(content='4 June 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Upgrade and verify X3D v4.0 XML DTD and Schema to validate',name='TODO'),
    meta(content='X3dMeshDesignPattern.txt',name='reference'),
    meta(content='X3dMeshDesignPattern.png',name='Image'),
    meta(content='Under development. Note that proposed design pattern for Normal inside PointSet or LineSet/IndexedLineSet is not allowed in X3D v3.3.',name='warning'),
    meta(content='Web3D 2017 Workshop on 3D Scanning: Use Cases, Workflow and Profile Requirements for X3D',name='reference'),
    meta(content='http://web3d2017.web3d.org/program',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Scanning/X3dMeshDesignPattern.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='X3dMeshDesignPattern.x3d'),
    Group(
      metadata=MetadataSet(name='X3dMesh',
        #  enter other Metadata nodes and values here, vocabulary TBD 
        ),
      children=[
      Switch(whichChoice=2,
        children=[
        Shape(
          geometry=PointSet(
            coord=Coordinate(DEF='VertexValues',point=[(1,1,0),(1,-1,0),(-1,-1,0),(-1,1,0)]),
            color=Color(DEF='VertexColors',color=[(1,0,0),(0,1,0),(0,0,1),(1,1,1)]),
            #  Currently invalid in X3D v3.3: Normal node not allowed inside PointSet 
            #  Of note: MeshLab allows assigning normals to a point cloud 
            normal=Normal(DEF='VertexNormals'))),
        Shape(
          geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1],
            coord=Coordinate(USE='VertexValues'),
            color=Color(USE='VertexColors'),
            #  Currently invalid in X3D v3.3: Normal node not allowed inside IndexedLineSet or LineSet 
            normal=Normal(USE='VertexNormals'))),
        Shape(
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],solid=False,
            coord=Coordinate(USE='VertexValues'),
            color=Color(USE='VertexColors'),
            normal=Normal(USE='VertexNormals')))]),
      ViewpointGroup(description='Viewpoints at appropriate distance from model',
        children=[
        Viewpoint(description='Front view',position=(0,0,4))])]),
    #  Default scene display 
    Background(skyColor=[(1,1,1)]),
    Transform(DEF='AvoidCoplanarAliasing',translation=(0,0,0.1),
      children=[
      Shape(
        geometry=Text(string=["X3D","Mesh","Design","Pattern"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.4,style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(0.3,0.7,0.7))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for X3dMeshDesignPattern.py")
