####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python BvhUniversityWisconsionExample1.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=3,name='HAnim'),
    meta(content='BvhUniversityWisconsionExample1.x3d',name='title'),
    meta(content='BVH file conversion: *enter description here, short-sentence summaries preferred*',name='description'),
    meta(content='*enter name of original author here*',name='creator'),
    meta(content='*enter date of initial version here*',name='created'),
    meta(content='2 September 2023',name='translated'),
    meta(content='18 December 2023',name='modified'),
    meta(content='BvhUniversityWIsconsionExample1.bvh',name='reference'),
    meta(content='https://TODO/UniversityWIsconsionExample1.bvh',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP',name='reference'),
    meta(content='Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package',name='generator'),
    meta(content='X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator'),
    meta(content='*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BvhUniversityWisconsionExample1.x3d'),
    NavigationInfo(),
    Group(DEF='BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation',
      #  17 BVH JOINT definitions found, following a single HIERARCHY ROOT 
      #  BVH HIERARCHY model size computations: minX=0.0, maxX=0.0, width=0.0; minY=-7.0, maxY=3.87, height=10.870000000000001; minZ=0.0, maxZ=4.9E-324, depth=4.9E-324 
      #  Estimated rescaling to meters based on height: scaleFactor=0.1 for modified height of 1.087m 
      #  Vertical offset to move bottom of BVH figure to ground plane (adjusted in HAnimJoint containerField='skeleton'): heightOffset=0.7000000000000001m 
      metadata=MetadataSet(name='BvhToHAnimNameConversionTable',
        #  key: MetadataString name='bvhName' reference='bvhType ROOT|JOINT|Site' value='"jointName" "segmentName"' (HAnimSite nodes have no segmentName) 
        value=[
        MetadataString(name='ROOT_Hips',reference='ROOT',value=["humanoid_root","sacrum"]),
        MetadataString(name='Chest',reference='JOINT',value=["vl5","l5"]),
        MetadataString(name='Neck',reference='JOINT',value=["Neck","vl5_to_Neck"]),
        MetadataString(name='Head',reference='JOINT',value=["skullbase","skull"]),
        MetadataString(name='HeadSite',reference='Site',value=["skullbase_tip"]),
        MetadataString(name='LeftCollar',reference='JOINT',value=["LeftCollar","vl5_to_LeftCollar"]),
        MetadataString(name='LeftUpArm',reference='JOINT',value=["LeftUpArm","LeftCollar_to_LeftUpArm"]),
        MetadataString(name='LeftLowArm',reference='JOINT',value=["LeftLowArm","LeftUpArm_to_LeftLowArm"]),
        MetadataString(name='LeftHand',reference='JOINT',value=["LeftHand","LeftLowArm_to_LeftHand"]),
        MetadataString(name='LeftHandSite',reference='Site',value=["LeftHand_tip"]),
        MetadataString(name='RightCollar',reference='JOINT',value=["RightCollar","vl5_to_RightCollar"]),
        MetadataString(name='RightUpArm',reference='JOINT',value=["RightUpArm","RightCollar_to_RightUpArm"]),
        MetadataString(name='RightLowArm',reference='JOINT',value=["RightLowArm","RightUpArm_to_RightLowArm"]),
        MetadataString(name='RightHand',reference='JOINT',value=["RightHand","RightLowArm_to_RightHand"]),
        MetadataString(name='RightHandSite',reference='Site',value=["RightHand_tip"]),
        MetadataString(name='LeftUpLeg',reference='JOINT',value=["LeftUpLeg","humanoid_root_to_LeftUpLeg"]),
        MetadataString(name='LeftLowLeg',reference='JOINT',value=["LeftLowLeg","LeftUpLeg_to_LeftLowLeg"]),
        MetadataString(name='LeftFoot',reference='JOINT',value=["LeftFoot","LeftLowLeg_to_LeftFoot"]),
        MetadataString(name='LeftFootSite',reference='Site',value=["LeftFoot_tip"]),
        MetadataString(name='RightUpLeg',reference='JOINT',value=["RightUpLeg","humanoid_root_to_RightUpLeg"]),
        MetadataString(name='RightLowLeg',reference='JOINT',value=["RightLowLeg","RightUpLeg_to_RightLowLeg"]),
        MetadataString(name='RightFoot',reference='JOINT',value=["RightFoot","RightLowLeg_to_RightFoot"]),
        MetadataString(name='RightFootSite',reference='Site',value=["RightFoot_tip"])])),
    #  initialPositionOffset computation: 0.000 6.135 0.000, initialPositionScaled computation: 0.000 1.244 0.000 
    Transform(DEF='InitialPositionScaled',translation=(0.000,1.244,0.000),
      children=[
      Viewpoint(description='BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m',position=(0,0,8)),
      Viewpoint(description='BvhUniversityWisconsionExample1 initial motion position',position=(0.803,3.501,16.836)),
      Viewpoint(description='BvhUniversityWisconsionExample1 final motion position',position=(0.781,3.510,16.647))]),
    HAnimHumanoid(DEF='BvhUniversityWisconsionExample1_ROOT_Hips',name='ROOT_Hips',version='2.0',
      metadata=MetadataSet(name='HAnimHumanoid.info',reference='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid',
        value=[
        MetadataString(name='authorEmail',value=["*TODO*"]),
        MetadataString(name='authorName',value=["*TODO*"]),
        MetadataString(name='copyright',value=["Copyright (c) 2023"]),
        MetadataString(name='humanoidVersion',value=["*TODO*"]),
        MetadataString(name='usageDescription',value=["*TODO*"])]),
      skeleton=[
      HAnimJoint(DEF='BvhUniversityWisconsionExample1_humanoid_root',name='humanoid_root',scale=(0.1,0.1,0.1),translation=(0.000,1.244,0.000),ulimit=[0,0,0],llimit=[0,0,0],
        #  BVH ROOT_Hips, OFFSET 0.0 5.21 0.0, CHANNELS 6 Xposition Yposition Zposition Zrotation Xrotation Yrotation 
        children=[
        HAnimSegment(DEF='BvhUniversityWisconsionExample1_sacrum',name='sacrum',
          #  humanoid_root child HAnimSegment with visualization root shape plus hidden DEF geometry for later use (radius 1 inch) 
          children=[
          Switch(whichChoice=0,
            children=[
            Group(
              children=[
              TouchSensor(description='HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum'),
              Shape(DEF='HAnimRootShape',
                geometry=Sphere(DEF='HAnimJointSphere',radius=0.25399999999999995),
                appearance=Appearance(
                  material=Material(DEF='HAnimRootMaterial',diffuseColor=(0.8,0,0),transparency=0.3)))]),
            Shape(DEF='HAnimJointShape',
              geometry=Sphere(USE='HAnimJointSphere'),
              appearance=Appearance(
                material=Material(DEF='HAnimJointMaterial',diffuseColor=(0,0,0.8),transparency=0.3))),
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0,0),(0,0,0)]),
                color=ColorRGBA(DEF='HAnimSegmentLineColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]))),
            Shape(DEF='HAnimSiteShape',
              geometry=IndexedFaceSet(DEF='DiamondIFS',coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],creaseAngle=0.5,solid=False,
                coord=Coordinate(point=[(0,0.25399999999999995,0),(-0.25399999999999995,0,0),(0,0,0.25399999999999995),(0.25399999999999995,0,0),(0,0,-0.25399999999999995),(0,-0.25399999999999995,0)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.5,0),transparency=0.3))),
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0,0),(0,0,0)]),
                color=ColorRGBA(DEF='HAnimSiteLineColorRGBA',color=[(1,0.5,0,1),(1,0.5,0,0.1)])))]),
          #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/> 
          Shape(
            geometry=LineSet(vertexCount=[2],
              coord=Coordinate(point=[(0,0,0),(0.0,5.21,0.0)]),
              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
          #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='LeftUpLeg'/> 
          Shape(
            geometry=LineSet(vertexCount=[2],
              coord=Coordinate(point=[(0,0,0),(3.91,0.0,0.0)]),
              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
          #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='RightUpLeg'/> 
          Shape(
            geometry=LineSet(vertexCount=[2],
              coord=Coordinate(point=[(0,0,0),(-3.91,0.0,0.0)]),
              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
        HAnimJoint(DEF='BvhUniversityWisconsionExample1_vl5',center=(0.0,5.21,0.0),name='vl5',ulimit=[0,0,0],llimit=[0,0,0],
          #  BVH JOINT Chest, OFFSET 0.0 5.21 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
          children=[
          HAnimSegment(DEF='BvhUniversityWisconsionExample1_l5',name='l5',
            #  Transform to establish local-origin reference frame at center of current Joint 
            children=[
            Transform(translation=(0.0,5.21,0.0),
              #  Visualization sphere for <HAnimJoint name='vl5'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_l5'> 
              children=[
              TouchSensor(description='HAnimJoint Chest vl5, HAnimSegment l5'),
              Shape(USE='HAnimJointShape'),
              #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='Neck'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0,0,0),(0.0,18.65,0.0)]),
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
              #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='LeftCollar'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0,0,0),(1.12,16.23,1.87)]),
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
              #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='RightCollar'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0,0,0),(-1.12,16.23,1.87)]),
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
          HAnimJoint(DEF='BvhUniversityWisconsionExample1_Neck',center=(0.0,23.86,0.0),name='Neck',ulimit=[0,0,0],llimit=[0,0,0],
            #  BVH JOINT Neck, OFFSET 0.0 18.65 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
            children=[
            HAnimSegment(DEF='BvhUniversityWisconsionExample1_vl5_to_Neck',name='vl5_to_Neck',
              #  Transform to establish local-origin reference frame at center of current Joint 
              children=[
              Transform(translation=(0.0,23.86,0.0),
                #  Visualization sphere for <HAnimJoint name='Neck'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_vl5_to_Neck'> 
                children=[
                TouchSensor(description='HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck'),
                Shape(USE='HAnimJointShape'),
                #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='Neck'/> to child <HAnimJoint name='skullbase'/> 
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(0,0,0),(0.0,5.45,0.0)]),
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
            HAnimJoint(DEF='BvhUniversityWisconsionExample1_skullbase',center=(0.0,29.31,0.0),name='skullbase',ulimit=[0,0,0],llimit=[0,0,0],
              #  BVH JOINT Head, OFFSET 0.0 5.45 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
              children=[
              HAnimSegment(DEF='BvhUniversityWisconsionExample1_skull',name='skull',
                #  Transform to establish local-origin reference frame at center of current Joint 
                children=[
                Transform(translation=(0.0,29.31,0.0),
                  children=[
                  HAnimSite(DEF='BvhUniversityWisconsionExample1_skull_tip',name='skull_tip',translation=(0.0,3.87,0.0),
                    #  BVH End Site OFFSET (0.0, 3.87, 0.0) 
                    children=[
                    TouchSensor(description='HAnimSite skull_tip'),
                    Shape(USE='HAnimSiteShape'),
                    #  HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='skullbase'/> to current <HAnimSite name='skull_tip'/> 
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        coord=Coordinate(point=[(0,-3.87,0),(0,0,0)]),
                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA')))]),
                  #  Visualization sphere for <HAnimJoint name='skullbase'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_skull'> 
                  TouchSensor(description='HAnimJoint Head skullbase, HAnimSegment skull'),
                  Shape(USE='HAnimJointShape')])])])]),
          HAnimJoint(DEF='BvhUniversityWisconsionExample1_LeftCollar',center=(1.12,21.44,1.87),name='LeftCollar',ulimit=[0,0,0],llimit=[0,0,0],
            #  BVH JOINT LeftCollar, OFFSET 1.12 16.23 1.87, CHANNELS 3 Zrotation Xrotation Yrotation 
            children=[
            HAnimSegment(DEF='BvhUniversityWisconsionExample1_vl5_to_LeftCollar',name='vl5_to_LeftCollar',
              #  Transform to establish local-origin reference frame at center of current Joint 
              children=[
              Transform(translation=(1.12,21.44,1.87),
                #  Visualization sphere for <HAnimJoint name='LeftCollar'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_vl5_to_LeftCollar'> 
                children=[
                TouchSensor(description='HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar'),
                Shape(USE='HAnimJointShape'),
                #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftCollar'/> to child <HAnimJoint name='LeftUpArm'/> 
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(0,0,0),(5.54,0.0,0.0)]),
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
            HAnimJoint(DEF='BvhUniversityWisconsionExample1_LeftUpArm',center=(6.66,21.44,1.87),name='LeftUpArm',ulimit=[0,0,0],llimit=[0,0,0],
              #  BVH JOINT LeftUpArm, OFFSET 5.54 0.0 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
              children=[
              HAnimSegment(DEF='BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm',name='LeftCollar_to_LeftUpArm',
                #  Transform to establish local-origin reference frame at center of current Joint 
                children=[
                Transform(translation=(6.66,21.44,1.87),
                  #  Visualization sphere for <HAnimJoint name='LeftUpArm'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm'> 
                  children=[
                  TouchSensor(description='HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm'),
                  Shape(USE='HAnimJointShape'),
                  #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftUpArm'/> to child <HAnimJoint name='LeftLowArm'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0,0,0),(0.0,-11.96,0.0)]),
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
              HAnimJoint(DEF='BvhUniversityWisconsionExample1_LeftLowArm',center=(6.66,9.48,1.87),name='LeftLowArm',ulimit=[0,0,0],llimit=[0,0,0],
                #  BVH JOINT LeftLowArm, OFFSET 0.0 -11.96 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
                children=[
                HAnimSegment(DEF='BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm',name='LeftUpArm_to_LeftLowArm',
                  #  Transform to establish local-origin reference frame at center of current Joint 
                  children=[
                  Transform(translation=(6.66,9.48,1.87),
                    #  Visualization sphere for <HAnimJoint name='LeftLowArm'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm'> 
                    children=[
                    TouchSensor(description='HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm'),
                    Shape(USE='HAnimJointShape'),
                    #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftLowArm'/> to child <HAnimJoint name='LeftHand'/> 
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        coord=Coordinate(point=[(0,0,0),(0.0,-9.93,0.0)]),
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
                HAnimJoint(DEF='BvhUniversityWisconsionExample1_LeftHand',center=(6.66,-0.4499999999999993,1.87),name='LeftHand',ulimit=[0,0,0],llimit=[0,0,0],
                  #  BVH JOINT LeftHand, OFFSET 0.0 -9.93 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
                  children=[
                  HAnimSegment(DEF='BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand',name='LeftLowArm_to_LeftHand',
                    #  Transform to establish local-origin reference frame at center of current Joint 
                    children=[
                    Transform(translation=(6.66,-0.4499999999999993,1.87),
                      children=[
                      HAnimSite(DEF='BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip',name='LeftLowArm_to_LeftHand_tip',translation=(0.0,-7.0,0.0),
                        #  BVH End Site OFFSET (0.0, -7.0, 0.0) 
                        children=[
                        TouchSensor(description='HAnimSite LeftLowArm_to_LeftHand_tip'),
                        Shape(USE='HAnimSiteShape'),
                        #  HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='LeftHand'/> to current <HAnimSite name='LeftLowArm_to_LeftHand_tip'/> 
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(0,7.0,0),(0,0,0)]),
                            color=ColorRGBA(USE='HAnimSiteLineColorRGBA')))]),
                      #  Visualization sphere for <HAnimJoint name='LeftHand'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand'> 
                      TouchSensor(description='HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand'),
                      Shape(USE='HAnimJointShape')])])])])])]),
          HAnimJoint(DEF='BvhUniversityWisconsionExample1_RightCollar',center=(-1.12,21.44,1.87),name='RightCollar',ulimit=[0,0,0],llimit=[0,0,0],
            #  BVH JOINT RightCollar, OFFSET -1.12 16.23 1.87, CHANNELS 3 Zrotation Xrotation Yrotation 
            children=[
            HAnimSegment(DEF='BvhUniversityWisconsionExample1_vl5_to_RightCollar',name='vl5_to_RightCollar',
              #  Transform to establish local-origin reference frame at center of current Joint 
              children=[
              Transform(translation=(-1.12,21.44,1.87),
                #  Visualization sphere for <HAnimJoint name='RightCollar'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_vl5_to_RightCollar'> 
                children=[
                TouchSensor(description='HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar'),
                Shape(USE='HAnimJointShape'),
                #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightCollar'/> to child <HAnimJoint name='RightUpArm'/> 
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(0,0,0),(-6.07,0.0,0.0)]),
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
            HAnimJoint(DEF='BvhUniversityWisconsionExample1_RightUpArm',center=(-7.19,21.44,1.87),name='RightUpArm',ulimit=[0,0,0],llimit=[0,0,0],
              #  BVH JOINT RightUpArm, OFFSET -6.07 0.0 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
              children=[
              HAnimSegment(DEF='BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm',name='RightCollar_to_RightUpArm',
                #  Transform to establish local-origin reference frame at center of current Joint 
                children=[
                Transform(translation=(-7.19,21.44,1.87),
                  #  Visualization sphere for <HAnimJoint name='RightUpArm'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm'> 
                  children=[
                  TouchSensor(description='HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm'),
                  Shape(USE='HAnimJointShape'),
                  #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightUpArm'/> to child <HAnimJoint name='RightLowArm'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0,0,0),(0.0,-11.82,0.0)]),
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
              HAnimJoint(DEF='BvhUniversityWisconsionExample1_RightLowArm',center=(-7.19,9.620000000000001,1.87),name='RightLowArm',ulimit=[0,0,0],llimit=[0,0,0],
                #  BVH JOINT RightLowArm, OFFSET 0.0 -11.82 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
                children=[
                HAnimSegment(DEF='BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm',name='RightUpArm_to_RightLowArm',
                  #  Transform to establish local-origin reference frame at center of current Joint 
                  children=[
                  Transform(translation=(-7.19,9.620000000000001,1.87),
                    #  Visualization sphere for <HAnimJoint name='RightLowArm'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm'> 
                    children=[
                    TouchSensor(description='HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm'),
                    Shape(USE='HAnimJointShape'),
                    #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightLowArm'/> to child <HAnimJoint name='RightHand'/> 
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        coord=Coordinate(point=[(0,0,0),(0.0,-10.65,0.0)]),
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
                HAnimJoint(DEF='BvhUniversityWisconsionExample1_RightHand',center=(-7.19,-1.0299999999999994,1.87),name='RightHand',ulimit=[0,0,0],llimit=[0,0,0],
                  #  BVH JOINT RightHand, OFFSET 0.0 -10.65 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
                  children=[
                  HAnimSegment(DEF='BvhUniversityWisconsionExample1_RightLowArm_to_RightHand',name='RightLowArm_to_RightHand',
                    #  Transform to establish local-origin reference frame at center of current Joint 
                    children=[
                    Transform(translation=(-7.19,-1.0299999999999994,1.87),
                      children=[
                      HAnimSite(DEF='BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip',name='RightLowArm_to_RightHand_tip',translation=(0.0,-7.0,0.0),
                        #  BVH End Site OFFSET (0.0, -7.0, 0.0) 
                        children=[
                        TouchSensor(description='HAnimSite RightLowArm_to_RightHand_tip'),
                        Shape(USE='HAnimSiteShape'),
                        #  HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='RightHand'/> to current <HAnimSite name='RightLowArm_to_RightHand_tip'/> 
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(0,7.0,0),(0,0,0)]),
                            color=ColorRGBA(USE='HAnimSiteLineColorRGBA')))]),
                      #  Visualization sphere for <HAnimJoint name='RightHand'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightLowArm_to_RightHand'> 
                      TouchSensor(description='HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand'),
                      Shape(USE='HAnimJointShape')])])])])])])]),
        HAnimJoint(DEF='BvhUniversityWisconsionExample1_LeftUpLeg',center=(3.91,0.0,0.0),name='LeftUpLeg',ulimit=[0,0,0],llimit=[0,0,0],
          #  BVH JOINT LeftUpLeg, OFFSET 3.91 0.0 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
          children=[
          HAnimSegment(DEF='BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg',name='humanoid_root_to_LeftUpLeg',
            #  Transform to establish local-origin reference frame at center of current Joint 
            children=[
            Transform(translation=(3.91,0.0,0.0),
              #  Visualization sphere for <HAnimJoint name='LeftUpLeg'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg'> 
              children=[
              TouchSensor(description='HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg'),
              Shape(USE='HAnimJointShape'),
              #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftUpLeg'/> to child <HAnimJoint name='LeftLowLeg'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0,0,0),(0.0,-18.34,0.0)]),
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
          HAnimJoint(DEF='BvhUniversityWisconsionExample1_LeftLowLeg',center=(3.91,-18.34,0.0),name='LeftLowLeg',ulimit=[0,0,0],llimit=[0,0,0],
            #  BVH JOINT LeftLowLeg, OFFSET 0.0 -18.34 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
            children=[
            HAnimSegment(DEF='BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg',name='LeftUpLeg_to_LeftLowLeg',
              #  Transform to establish local-origin reference frame at center of current Joint 
              children=[
              Transform(translation=(3.91,-18.34,0.0),
                #  Visualization sphere for <HAnimJoint name='LeftLowLeg'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg'> 
                children=[
                TouchSensor(description='HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg'),
                Shape(USE='HAnimJointShape'),
                #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='LeftLowLeg'/> to child <HAnimJoint name='LeftFoot'/> 
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(0,0,0),(0.0,-17.37,0.0)]),
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
            HAnimJoint(DEF='BvhUniversityWisconsionExample1_LeftFoot',center=(3.91,-35.71,0.0),name='LeftFoot',ulimit=[0,0,0],llimit=[0,0,0],
              #  BVH JOINT LeftFoot, OFFSET 0.0 -17.37 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
              children=[
              HAnimSegment(DEF='BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot',name='LeftLowLeg_to_LeftFoot',
                #  Transform to establish local-origin reference frame at center of current Joint 
                children=[
                Transform(translation=(3.91,-35.71,0.0),
                  children=[
                  HAnimSite(DEF='BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip',name='LeftLowLeg_to_LeftFoot_tip',translation=(0.0,-3.46,0.0),
                    #  BVH End Site OFFSET (0.0, -3.46, 0.0) 
                    children=[
                    TouchSensor(description='HAnimSite LeftLowLeg_to_LeftFoot_tip'),
                    Shape(USE='HAnimSiteShape'),
                    #  HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='LeftFoot'/> to current <HAnimSite name='LeftLowLeg_to_LeftFoot_tip'/> 
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        coord=Coordinate(point=[(0,3.46,0),(0,0,0)]),
                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA')))]),
                  #  Visualization sphere for <HAnimJoint name='LeftFoot'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot'> 
                  TouchSensor(description='HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot'),
                  Shape(USE='HAnimJointShape')])])])])]),
        HAnimJoint(DEF='BvhUniversityWisconsionExample1_RightUpLeg',center=(-3.91,0.0,0.0),name='RightUpLeg',ulimit=[0,0,0],llimit=[0,0,0],
          #  BVH JOINT RightUpLeg, OFFSET -3.91 0.0 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
          children=[
          HAnimSegment(DEF='BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg',name='humanoid_root_to_RightUpLeg',
            #  Transform to establish local-origin reference frame at center of current Joint 
            children=[
            Transform(translation=(-3.91,0.0,0.0),
              #  Visualization sphere for <HAnimJoint name='RightUpLeg'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg'> 
              children=[
              TouchSensor(description='HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg'),
              Shape(USE='HAnimJointShape'),
              #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightUpLeg'/> to child <HAnimJoint name='RightLowLeg'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0,0,0),(0.0,-17.63,0.0)]),
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
          HAnimJoint(DEF='BvhUniversityWisconsionExample1_RightLowLeg',center=(-3.91,-17.63,0.0),name='RightLowLeg',ulimit=[0,0,0],llimit=[0,0,0],
            #  BVH JOINT RightLowLeg, OFFSET 0.0 -17.63 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
            children=[
            HAnimSegment(DEF='BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg',name='RightUpLeg_to_RightLowLeg',
              #  Transform to establish local-origin reference frame at center of current Joint 
              children=[
              Transform(translation=(-3.91,-17.63,0.0),
                #  Visualization sphere for <HAnimJoint name='RightLowLeg'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg'> 
                children=[
                TouchSensor(description='HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg'),
                Shape(USE='HAnimJointShape'),
                #  HAnimSegment OFFSET visualization line from current <HAnimJoint name='RightLowLeg'/> to child <HAnimJoint name='RightFoot'/> 
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(0,0,0),(0.0,-17.14,0.0)]),
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))])]),
            HAnimJoint(DEF='BvhUniversityWisconsionExample1_RightFoot',center=(-3.91,-34.769999999999996,0.0),name='RightFoot',ulimit=[0,0,0],llimit=[0,0,0],
              #  BVH JOINT RightFoot, OFFSET 0.0 -17.14 0.0, CHANNELS 3 Zrotation Xrotation Yrotation 
              children=[
              HAnimSegment(DEF='BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot',name='RightLowLeg_to_RightFoot',
                #  Transform to establish local-origin reference frame at center of current Joint 
                children=[
                Transform(translation=(-3.91,-34.769999999999996,0.0),
                  children=[
                  HAnimSite(DEF='BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip',name='RightLowLeg_to_RightFoot_tip',translation=(0.0,-3.75,0.0),
                    #  BVH End Site OFFSET (0.0, -3.75, 0.0) 
                    children=[
                    TouchSensor(description='HAnimSite RightLowLeg_to_RightFoot_tip'),
                    Shape(USE='HAnimSiteShape'),
                    #  HAnimSite visualization line for current OFFSET from grandparent <HAnimJoint name='RightFoot'/> to current <HAnimSite name='RightLowLeg_to_RightFoot_tip'/> 
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        coord=Coordinate(point=[(0,3.75,0),(0,0,0)]),
                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA')))]),
                  #  Visualization sphere for <HAnimJoint name='RightFoot'> is placed within <HAnimSegment name='BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot'> 
                  TouchSensor(description='HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot'),
                  Shape(USE='HAnimJointShape')])])])])])]),],
      sites=[
      HAnimSite(USE='BvhUniversityWisconsionExample1_humanoid_root_view'),
      HAnimSite(USE='BvhUniversityWisconsionExample1_skull_tip'),
      HAnimSite(USE='BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip'),
      HAnimSite(USE='BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip'),
      HAnimSite(USE='BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip'),
      HAnimSite(USE='BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip')],
      viewpoints=[
      HAnimSite(DEF='BvhUniversityWisconsionExample1_humanoid_root_view',name='humanoid_root_view',
        children=[
        Viewpoint(DEF='BvhUniversityWisconsionExample1_humanoid_root_viewpoint',description='BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center',position=(0,0,80.0))]),],
      #  info='"authorEmail=*TODO*" "authorName=*TODO*" "copyright=Copyright (c) 2022" "humanoidVersion=*TODO*" "usageRestrictions=*TODO*"' 
      #  Top-level HAnimSite/Viewpoint attached to HAnimHumanoid is unaffected by motion animation 
      #  insert pseudo Joint for humanoid_root skeleton (matching root HIERARCHY in original BVH mocap model, but appearing as skeleton field in X3D HAnimHumanoid) 
      #  top-level USE nodes follow DEF declarations and can be employed by inverse-kinematics (IK) engines or other HAnim tools 
      joints=[
      HAnimJoint(USE='BvhUniversityWisconsionExample1_humanoid_root',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_vl5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_Neck',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_skullbase',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_LeftCollar',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_LeftUpArm',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_LeftLowArm',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_LeftHand',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_RightCollar',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_RightUpArm',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_RightLowArm',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_RightHand',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_LeftUpLeg',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_LeftLowLeg',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_LeftFoot',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_RightUpLeg',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_RightLowLeg',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='BvhUniversityWisconsionExample1_RightFoot',ulimit=[0,0,0],llimit=[0,0,0])],
      segments=[
      HAnimSegment(USE='BvhUniversityWisconsionExample1_sacrum'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_l5'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_vl5_to_Neck'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_skull'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_vl5_to_LeftCollar'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_vl5_to_RightCollar'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_RightLowArm_to_RightHand'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg'),
      HAnimSegment(USE='BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot')],),
    #  ============================================================= 
    #  testAxisAngleRotation() results compared to RotationTests.x3d 
    #  getAxisAngleRotation(-4.40030,-0.38161,-1.82953) = (0.4067064033441406, -0.7164490591980798, -0.566825058596618, 2.6752961450535095), expected rotation: 0.40671 -0.71645 -0.56683 2.6753 
    #  getAxisAngleRotation(5.80115,2.55377,2.83223) = (-0.9645827419506009, 0.07774106101143803, 0.2520643992393143, 2.59673649727989), expected rotation: -0.96458 0.07774 0.25206 2.59674 
    #  getAxisAngleRotation(-3.76620,-3.47408,-3.93998) = (0.4075772844419879, -0.491492223290994, -0.7696207843161272, 1.1286216623422884), expected rotation: 0.40758 -0.49149 -0.76962 1.12862 
    #  ============================================================= 
    Group(DEF='BvhUniversityWisconsionExample1_MotionGroup',
      #  BVH MOTION 
      #  BVH Frames: 2 
      #  BVH Frame Time: 0.033333 seconds (30.01 frames per second) 
      #  Expected frame count: 2, actual frame count: 2, animation total duration: 0.067 seconds 
      #  Frame width: 19 triplet values 
      #  Total count: 57 * 2 = 114 recorded motion values 
      #  Animation playback: enable RealTimer for continuous motion at 30.010 frames/second (fps) 
      children=[
      TimeSensor(DEF='RealTimer',cycleInterval=0.067,loop=True),
      #  Alternative replay: enable StepTimer for discrete time-step motion at 1 fps 
      TimeSensor(DEF='StepTimer',cycleInterval=2,enabled=False,loop=True),
      ScalarInterpolator(DEF='FrameStepper',key=[0.0000,1.0,1.0],keyValue=[0.0000,0.0000,1.0]),
      ROUTE(fromField='fraction_changed',fromNode='StepTimer',toField='set_fraction',toNode='FrameStepper'),
      #  Interpolator0_humanoid_root channels [0..2] sends animation values to BVH JOINT ROOT_Hips = <HAnimJoint DEF='BvhUniversityWisconsionExample1_ROOT_Hips' name='humanoid_root'/> 
      PositionInterpolator(DEF='Interpolator0_humanoid_root',key=[0.0000,1.0],keyValue=[(0.8030,3.5010,8.8360),(0.7810,3.5100,8.6470)]),
      #  Position triplet values, CHANNELS Xposition Yposition Zposition Zrotation Xrotation Yrotation, with min/max ranges [1.7976931348623157E308,4.9E-324], [1.7976931348623157E308,4.9E-324], [1.7976931348623157E308,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 8.030000 35.010000 88.360000, 7.810000 35.100000 86.470000 
      #  Interpolator1_humanoid_root channels [3..5] sends animation values to BVH JOINT ROOT_Hips = <HAnimJoint DEF='BvhUniversityWisconsionExample1_ROOT_Hips' name='humanoid_root'/> 
      OrientationInterpolator(DEF='Interpolator1_humanoid_root',key=[0.0000,1.0],keyValue=[(-0.0118,-0.9911,-0.1325,2.8785),(-0.0199,-0.9930,-0.1163,2.9232)]),
      #  Euler angle triplet values, CHANNELS Xposition Yposition Zposition Zrotation Xrotation Yrotation, with min/max ranges [-3.78,4.9E-324], [12.94,14.78], [-166.97,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: -3.410000 14.780000 -164.350000, -3.780000 12.940000 -166.970000 
      #  Interpolator2_vl5 channels [6..8] sends animation values to BVH JOINT Chest = <HAnimJoint DEF='BvhUniversityWisconsionExample1_vl5' name='vl5'/> 
      OrientationInterpolator(DEF='Interpolator2_vl5',key=[0.0000,1.0],keyValue=[(0.9093,-0.4082,0.0806,0.8073),(0.9336,-0.3501,0.0768,0.8240)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [12.64,13.09], [40.3,42.57], [-24.6,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 13.090000 40.300000 -24.600000, 12.640000 42.570000 -22.340000 
      #  Interpolator3_Neck channels [9..11] sends animation values to BVH JOINT Neck = <HAnimJoint DEF='BvhUniversityWisconsionExample1_Neck' name='Neck'/> 
      OrientationInterpolator(DEF='Interpolator3_Neck',key=[0.0000,1.0],keyValue=[(0.9834,0.0677,0.1685,0.7761),(0.9841,0.0660,0.1649,0.7723)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [7.67,7.88], [43.61,43.8], [0.0,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 7.880000 43.800000 0.000000, 7.670000 43.610000 0.000000 
      #  Interpolator4_skullbase channels [12..14] sends animation values to BVH JOINT Head = <HAnimJoint DEF='BvhUniversityWisconsionExample1_skullbase' name='skullbase'/> 
      OrientationInterpolator(DEF='Interpolator4_skullbase',key=[0.0000,1.0],keyValue=[(-0.9778,0.1629,-0.1317,0.7360),(-0.9794,0.1474,-0.1381,0.7342)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-4.23,4.9E-324], [-41.45,4.9E-324], [4.89,5.82] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: -3.610000 -41.450000 5.820000, -4.230000 -41.410000 4.890000 
      #  Interpolator5_LeftCollar channels [15..17] sends animation values to BVH JOINT LeftCollar = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftCollar' name='LeftCollar'/> 
      OrientationInterpolator(DEF='Interpolator5_LeftCollar',key=[0.0000,1.0],keyValue=[(-0.0626,0.7102,0.7012,0.2502),(-0.0355,0.2109,0.9769,0.3411)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [10.08,19.1], [0.0,4.9E-324], [4.16,10.21] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 10.080000 0.000000 10.210000, 19.100000 0.000000 4.160000 
      #  Interpolator6_LeftUpArm channels [18..20] sends animation values to BVH JOINT LeftUpArm = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftUpArm' name='LeftUpArm'/> 
      OrientationInterpolator(DEF='Interpolator6_LeftUpArm',key=[0.0000,1.0],keyValue=[(-0.1561,-0.2157,0.9639,1.7536),(0.0022,-0.1597,0.9872,1.6521)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [93.12,97.95], [-23.53,4.9E-324], [-9.43,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 97.950000 -23.530000 -2.140000, 93.120000 -9.690000 -9.430000 
      #  Interpolator7_LeftLowArm channels [21..23] sends animation values to BVH JOINT LeftLowArm = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftLowArm' name='LeftLowArm'/> 
      OrientationInterpolator(DEF='Interpolator7_LeftLowArm',key=[0.0000,1.0],keyValue=[(-0.9933,-0.0526,-0.1030,1.6066),(-0.9965,0.0822,0.0138,1.6744)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-101.86,132.67], [-81.86,4.9E-324], [-98.91,136.8] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: -101.860000 -80.770000 -98.910000, 132.670000 -81.860000 136.800000 
      #  Interpolator8_LeftHand channels [24..26] sends animation values to BVH JOINT LeftHand = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftHand' name='LeftHand'/> 
      OrientationInterpolator(DEF='Interpolator8_LeftHand',key=[0.0000,1.0],keyValue=[(0.0434,0.0003,0.9991,0.0121),(0.4673,0.0029,0.8841,0.0138)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [0.69,0.7], [0.03,0.37], [0.0,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 0.690000 0.030000 0.000000, 0.700000 0.370000 0.000000 
      #  Interpolator9_RightCollar channels [27..29] sends animation values to BVH JOINT RightCollar = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightCollar' name='RightCollar'/> 
      OrientationInterpolator(DEF='Interpolator9_RightCollar',key=[0.0000,1.0],keyValue=[(-0.0734,-0.5964,-0.7993,0.3057),(-0.0700,-0.9291,-0.3633,0.4091)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-14.04,4.9E-324], [0.0,4.9E-324], [-21.82,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: -14.040000 0.000000 -10.500000, -8.620000 0.000000 -21.820000 
      #  Interpolator10_RightUpArm channels [30..32] sends animation values to BVH JOINT RightUpArm = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightUpArm' name='RightUpArm'/> 
      OrientationInterpolator(DEF='Interpolator10_RightUpArm',key=[0.0000,1.0],keyValue=[(-0.6801,-0.6074,-0.4106,2.0536),(-0.7650,-0.5303,-0.3654,1.9107)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-87.31,4.9E-324], [-27.57,4.9E-324], [-102.93,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: -85.520000 -13.720000 -102.930000, -87.310000 -27.570000 -100.090000 
      #  Interpolator11_RightLowArm channels [33..35] sends animation values to BVH JOINT RightLowArm = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightLowArm' name='RightLowArm'/> 
      OrientationInterpolator(DEF='Interpolator11_RightLowArm',key=[0.0000,1.0],keyValue=[(-0.9378,0.2739,0.2135,1.4058),(-0.9433,0.2577,0.2091,1.3563)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [56.17,61.91], [-61.56,4.9E-324], [58.72,65.18] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 61.910000 -61.180000 65.180000, 56.170000 -61.560000 58.720000 
      #  Interpolator12_RightHand channels [36..38] sends animation values to BVH JOINT RightHand = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightHand' name='RightHand'/> 
      OrientationInterpolator(DEF='Interpolator12_RightHand',key=[0.0000,1.0],keyValue=[(0.4025,0.0061,-0.9154,0.0299),(0.5037,0.0087,-0.8638,0.0329)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-1.63,4.9E-324], [0.69,0.95], [0.02,0.03] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: -1.570000 0.690000 0.020000, -1.630000 0.950000 0.030000 
      #  Interpolator13_LeftUpLeg channels [39..41] sends animation values to BVH JOINT LeftUpLeg = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftUpLeg' name='LeftUpLeg'/> 
      OrientationInterpolator(DEF='Interpolator13_LeftUpLeg',key=[0.0000,1.0],keyValue=[(0.8595,-0.1039,0.5004,0.4748),(0.7784,-0.0864,0.6217,0.3536)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [13.16,15.0], [15.44,22.78], [-5.92,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 15.000000 22.780000 -5.920000, 13.160000 15.440000 -3.560000 
      #  Interpolator14_LeftLowLeg channels [42..44] sends animation values to BVH JOINT LeftLowLeg = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftLowLeg' name='LeftLowLeg'/> 
      OrientationInterpolator(DEF='Interpolator14_LeftLowLeg',key=[0.0000,1.0],keyValue=[(0.9184,0.2378,0.3162,0.9291),(0.9762,0.1432,0.1627,1.0525)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [7.97,14.93], [49.99,59.29], [4.97,6.6] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 14.930000 49.990000 6.600000, 7.970000 59.290000 4.970000 
      #  Interpolator15_LeftFoot channels [45..47] sends animation values to BVH JOINT LeftFoot = <HAnimJoint DEF='BvhUniversityWisconsionExample1_LeftFoot' name='LeftFoot'/> 
      OrientationInterpolator(DEF='Interpolator15_LeftFoot',key=[0.0000,1.0],keyValue=[(-1.0000,0.0000,0.0000,0.0199),(1.0000,0.0000,0.0000,0.0286)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [0.0,4.9E-324], [-1.14,1.64], [0.0,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 0.000000 -1.140000 0.000000, 0.000000 1.640000 0.000000 
      #  Interpolator16_RightUpLeg channels [48..50] sends animation values to BVH JOINT RightUpLeg = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightUpLeg' name='RightUpLeg'/> 
      OrientationInterpolator(DEF='Interpolator16_RightUpLeg',key=[0.0000,1.0],keyValue=[(-0.5548,-0.0795,-0.8282,0.3423),(-0.5234,-0.0778,-0.8485,0.3468)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [-17.18,4.9E-324], [-10.51,4.9E-324], [-3.11,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: -16.580000 -10.510000 -3.110000, -17.180000 -10.020000 -3.080000 
      #  Interpolator17_RightLowLeg channels [51..53] sends animation values to BVH JOINT RightLowLeg = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightLowLeg' name='RightLowLeg'/> 
      OrientationInterpolator(DEF='Interpolator17_RightLowLeg',key=[0.0000,1.0],keyValue=[(0.9694,-0.2340,0.0739,0.9755),(0.9797,-0.1864,0.0732,0.9707)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [13.56,15.38], [52.66,53.38], [-21.8,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 15.380000 52.660000 -21.800000, 13.560000 53.380000 -18.070000 
      #  Interpolator18_RightFoot channels [54..56] sends animation values to BVH JOINT RightFoot = <HAnimJoint DEF='BvhUniversityWisconsionExample1_RightFoot' name='RightFoot'/> 
      OrientationInterpolator(DEF='Interpolator18_RightFoot',key=[0.0000,1.0],keyValue=[(-1.0000,0.0000,0.0000,0.4180),(-1.0000,0.0000,0.0000,0.4526)]),
      #  Euler angle triplet values, CHANNELS Zrotation Xrotation Yrotation, with min/max ranges [0.0,4.9E-324], [-25.93,4.9E-324], [0.0,4.9E-324] degrees 
      #  Vertical channel slice of 3 Euler angles from BVH motion array: 0.000000 -23.950000 0.000000, 0.000000 -25.930000 0.000000 
      #  Overall angle min/max range [-166.97,136.8] degrees 
      #  Corresponding ROUTE statements to send animation values 
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator0_humanoid_root'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator0_humanoid_root'),
      ROUTE(fromField='value_changed',fromNode='Interpolator0_humanoid_root',toField='set_translation',toNode='BvhUniversityWisconsionExample1_humanoid_root'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator1_humanoid_root'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator1_humanoid_root'),
      ROUTE(fromField='value_changed',fromNode='Interpolator1_humanoid_root',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_humanoid_root'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator2_vl5'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator2_vl5'),
      ROUTE(fromField='value_changed',fromNode='Interpolator2_vl5',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_vl5'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator3_Neck'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator3_Neck'),
      ROUTE(fromField='value_changed',fromNode='Interpolator3_Neck',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_Neck'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator4_skullbase'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator4_skullbase'),
      ROUTE(fromField='value_changed',fromNode='Interpolator4_skullbase',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_skullbase'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator5_LeftCollar'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator5_LeftCollar'),
      ROUTE(fromField='value_changed',fromNode='Interpolator5_LeftCollar',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_LeftCollar'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator6_LeftUpArm'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator6_LeftUpArm'),
      ROUTE(fromField='value_changed',fromNode='Interpolator6_LeftUpArm',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_LeftUpArm'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator7_LeftLowArm'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator7_LeftLowArm'),
      ROUTE(fromField='value_changed',fromNode='Interpolator7_LeftLowArm',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_LeftLowArm'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator8_LeftHand'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator8_LeftHand'),
      ROUTE(fromField='value_changed',fromNode='Interpolator8_LeftHand',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_LeftHand'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator9_RightCollar'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator9_RightCollar'),
      ROUTE(fromField='value_changed',fromNode='Interpolator9_RightCollar',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_RightCollar'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator10_RightUpArm'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator10_RightUpArm'),
      ROUTE(fromField='value_changed',fromNode='Interpolator10_RightUpArm',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_RightUpArm'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator11_RightLowArm'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator11_RightLowArm'),
      ROUTE(fromField='value_changed',fromNode='Interpolator11_RightLowArm',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_RightLowArm'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator12_RightHand'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator12_RightHand'),
      ROUTE(fromField='value_changed',fromNode='Interpolator12_RightHand',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_RightHand'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator13_LeftUpLeg'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator13_LeftUpLeg'),
      ROUTE(fromField='value_changed',fromNode='Interpolator13_LeftUpLeg',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_LeftUpLeg'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator14_LeftLowLeg'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator14_LeftLowLeg'),
      ROUTE(fromField='value_changed',fromNode='Interpolator14_LeftLowLeg',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_LeftLowLeg'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator15_LeftFoot'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator15_LeftFoot'),
      ROUTE(fromField='value_changed',fromNode='Interpolator15_LeftFoot',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_LeftFoot'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator16_RightUpLeg'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator16_RightUpLeg'),
      ROUTE(fromField='value_changed',fromNode='Interpolator16_RightUpLeg',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_RightUpLeg'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator17_RightLowLeg'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator17_RightLowLeg'),
      ROUTE(fromField='value_changed',fromNode='Interpolator17_RightLowLeg',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_RightLowLeg'),
      ROUTE(fromField='fraction_changed',fromNode='RealTimer',toField='set_fraction',toNode='Interpolator18_RightFoot'),
      ROUTE(fromField='value_changed',fromNode='FrameStepper',toField='set_fraction',toNode='Interpolator18_RightFoot'),
      ROUTE(fromField='value_changed',fromNode='Interpolator18_RightFoot',toField='set_rotation',toNode='BvhUniversityWisconsionExample1_RightFoot')])]
    #  All frame data: 8.030 35.010 88.360 -3.410 14.780 -164.350 13.090 40.300 -24.600 7.880 43.800 0.000 -3.610 -41.450 5.820 10.080 0.000 10.210 97.950 -23.530 -2.140 -101.860 -80.770 -98.910 0.690 0.030 0.000 -14.040 0.000 -10.500 -85.520 -13.720 -102.930 61.910 -61.180 65.180 -1.570 0.690 0.020 15.000 22.780 -5.920 14.930 49.990 6.600 0.000 -1.140 0.000 -16.580 -10.510 -3.110 15.380 52.660 -21.800 0.000 -23.950 0.000 7.810 35.100 86.470 -3.780 12.940 -166.970 12.640 42.570 -22.340 7.670 43.610 0.000 -4.230 -41.410 4.890 19.100 0.000 4.160 93.120 -9.690 -9.430 132.670 -81.860 136.800 0.700 0.370 0.000 -8.620 0.000 -21.820 -87.310 -27.570 -100.090 56.170 -61.560 58.720 -1.630 0.950 0.030 13.160 15.440 -3.560 7.970 59.290 4.970 0.000 1.640 0.000 -17.180 -10.020 -3.080 13.560 53.380 -18.070 0.000 -25.930 0.000 
    )
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for BvhUniversityWisconsionExample1.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python BvhUniversityWisconsionExample1.py load and self-test diagnostics complete.")
