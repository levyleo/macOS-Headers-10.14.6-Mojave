//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SKLabelNode, SKScene;

@interface SKSCNRenderer : NSObject
{
    double _timePreviousUpdate;
    // Error parsing type: ^{SKCRenderer=@f{shared_ptr<SKCRenderPass>=^{SKCRenderPass}^{__shared_weak_count}}I{shared_ptr<jet_command_buffer>=^{jet_command_buffer}^{__shared_weak_count}}{list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > >={__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>=^{__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>}^{__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > >=Q}}{?=II^^^{?=[4]}f^{SKCRenderer}f{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}^{jet_buffer}^{jet_buffer}^{jet_buffer}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}BI{SKCRenderBatch=BiII@^{jet_program}^{jet_texture}^{jet_texture}^{jet_sampler}^{jet_sampler}IIf}^{SKCStats}{vector<std::__1::shared_ptr<jet_buffer>, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}^{shared_ptr<jet_buffer>}{__compressed_pair<std::__1::shared_ptr<jet_buffer> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}}}{vector<std::__1::shared_ptr<jet_buffer_pool>, std::__1::allocator<std::__1::shared_ptr<jet_buffer_pool> > >=^{shared_ptr<jet_buffer_pool>}^{shared_ptr<jet_buffer_pool>}{__compressed_pair<std::__1::shared_ptr<jet_buffer_pool> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer_pool> > >=^{shared_ptr<jet_buffer_pool>}}}}^{SKCStats}{SKCStats=^^?ddddi{?=dd}{?=dd}{?=ddi}{?=ddi}{?=ddiiiiiiii}}@@BBB{shared_ptr<jet_context>=^{jet_context}^{__shared_weak_count}}{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{map<SKCLightNode *, float __attribute__((ext_vector_type(4))), std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, float __attribute__((ext_vector_type(4)))> > >={__tree<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true> >=Q}}}{map<unsigned int, SKCLightMaskUniforms, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SKCLightMaskUniforms> > >={__tree<std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, SKCLightMaskUniforms> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::less<unsigned int>, true> >=Q}}}{vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}^^{SKCRenderSortInfo}{__compressed_pair<SKCRenderSortInfo **, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}}}{map<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > >, std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >={__tree<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true> >=Q}}}^{SKCSpriteNode}^{SKCLabelNode}{?=^{SKCRenderPass}^{SKCRenderSortGroup}I{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}^{__list_node_base<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}^{__list_node_base<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{__list_iterator<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}}}{vector<std::__1::shared_ptr<jet_framebuffer>, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}^{shared_ptr<jet_framebuffer>}{__compressed_pair<std::__1::shared_ptr<jet_framebuffer> *, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}@}, name: _skcRenderer
    NSMutableDictionary *_viewRenderOptions;
    SKLabelNode *_statsLabel;
    double _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    BOOL _hasRenderedOnce;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _isInTransition;
    BOOL _disableInput;
    SKScene *_scene;
    float _prevBackingScaleFactor;
    BOOL showsFPS;
    BOOL showsNodeCount;
    double _backingScaleFactor;
    struct CGRect _bounds;
}

+ (id)rendererWithContext:(id)arg1 options:(id)arg2;
+ (void)setPrefersOpenGL:(BOOL)arg1;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;
+ (void)restoreDefaultOpenGLState:(id)arg1 frameBuffer:(int)arg2;
+ (int)getOpenGLFramebuffer:(id)arg1;
@property(nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (int)_spriteSubmitCount;
- (int)_spriteRenderCount;
- (double)_fps;
- (id)_scene;
- (id)_getOptions;
-     // Error parsing type: {?=[4]}16@0:8, name: _getMatrix
-     // Error parsing type: 16@0:8, name: _getDestBounds
-     // Error parsing type: 16@0:8, name: _getViewport
- (void)_update:(double)arg1;
- (void)_showAllStats;
- (void)set_showsTotalAreaRendered:(BOOL)arg1;
- (BOOL)_showsTotalAreaRendered;
- (void)set_showsCulledNodesInNodeCount:(BOOL)arg1;
- (BOOL)_showsCulledNodesInNodeCount;
- (BOOL)_showsGPUStats;
- (void)set_showsGPUStats:(BOOL)arg1;
- (BOOL)_showsCPUStats;
- (void)set_showsCPUStats:(BOOL)arg1;
- (BOOL)_showsCoreAnimationFPS;
- (void)set_showsCoreAnimationFPS:(BOOL)arg1;
- (BOOL)_shouldCenterStats;
- (void)set_shouldCenterStats:(BOOL)arg1;
- (BOOL)_showsSpriteBounds;
- (void)set_showsSpriteBounds:(BOOL)arg1;
- (id)init;
@property(nonatomic) BOOL showsFields;
- (BOOL)_showsOutlineInterior;
- (void)set_showsOutlineInterior:(BOOL)arg1;
@property(nonatomic) BOOL showsPhysics;
@property(nonatomic) BOOL showsDrawCount;
- (BOOL)showsQuadCount;
- (void)setShowsQuadCount:(BOOL)arg1;
@property(nonatomic) BOOL showsNodeCount; // @synthesize showsNodeCount;
@property(nonatomic) BOOL showsFPS; // @synthesize showsFPS;
- (BOOL)showsSpriteBounds;
- (void)setShowsSpriteBounds:(BOOL)arg1;
- (struct CGSize)pixelSize;
- (void)renderTransition:(id)arg1 toFramebuffer:(int)arg2 withInputTexture:(unsigned int)arg3 outputTexture:(unsigned int)arg4 inputTextureSize:(struct CGSize)arg5 outputTextureSize:(struct CGSize)arg6 time:(float)arg7;
- (void)renderTransition:(id)arg1 withInputTexture:(unsigned int)arg2 outputTexture:(unsigned int)arg3 inputTextureSize:(struct CGSize)arg4 outputTextureSize:(struct CGSize)arg5 time:(float)arg6;
- (void)settingsForTransition:(id)arg1 atTime:(double)arg2 renderIncomingToTexture:(char *)arg3 renderOutgoingToTexture:(char *)arg4 renderIncomingToScreen:(char *)arg5 renderOutgoingToScreen:(char *)arg6;
- (void)render:(BOOL)arg1;
- (void)renderToFramebuffer:(int)arg1 shouldClear:(BOOL)arg2;
- (void)renderToTexture:(id)arg1 commandQueue:(id)arg2;
- (void)renderTransition:(id)arg1 withInputTexture:(id)arg2 outputTexture:(id)arg3 time:(float)arg4 encoder:(id)arg5 pass:(id)arg6 commandQueue:(id)arg7;
- (void)renderWithEncoder:(id)arg1 pass:(id)arg2 commandQueue:(id)arg3;
- (void)updateAtTime:(double)arg1;
- (void)setupContext;
- (void)_initialize;
-     // Error parsing type: @24@0:8^{SKCRenderer=@f{shared_ptr<SKCRenderPass>=^{SKCRenderPass}^{__shared_weak_count}}I{shared_ptr<jet_command_buffer>=^{jet_command_buffer}^{__shared_weak_count}}{list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > >={__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>=^{__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>}^{__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > >=Q}}{?=II^^^{?=[4]}f^{SKCRenderer}f{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}^{jet_buffer}^{jet_buffer}^{jet_buffer}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}BI{SKCRenderBatch=BiII@^{jet_program}^{jet_texture}^{jet_texture}^{jet_sampler}^{jet_sampler}IIf}^{SKCStats}{vector<std::__1::shared_ptr<jet_buffer>, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}^{shared_ptr<jet_buffer>}{__compressed_pair<std::__1::shared_ptr<jet_buffer> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}}}{vector<std::__1::shared_ptr<jet_buffer_pool>, std::__1::allocator<std::__1::shared_ptr<jet_buffer_pool> > >=^{shared_ptr<jet_buffer_pool>}^{shared_ptr<jet_buffer_pool>}{__compressed_pair<std::__1::shared_ptr<jet_buffer_pool> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer_pool> > >=^{shared_ptr<jet_buffer_pool>}}}}^{SKCStats}{SKCStats=^^?ddddi{?=dd}{?=dd}{?=ddi}{?=ddi}{?=ddiiiiiiii}}@@BBB{shared_ptr<jet_context>=^{jet_context}^{__shared_weak_count}}{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{map<SKCLightNode *, float __attribute__((ext_vector_type(4))), std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, float __attribute__((ext_vector_type(4)))> > >={__tree<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true> >=Q}}}{map<unsigned int, SKCLightMaskUniforms, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SKCLightMaskUniforms> > >={__tree<std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, SKCLightMaskUniforms> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::less<unsigned int>, true> >=Q}}}{vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}^^{SKCRenderSortInfo}{__compressed_pair<SKCRenderSortInfo **, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}}}{map<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > >, std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >={__tree<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true> >=Q}}}^{SKCSpriteNode}^{SKCLabelNode}{?=^{SKCRenderPass}^{SKCRenderSortGroup}I{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}^{__list_node_base<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}^{__list_node_base<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{__list_iterator<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}}}{vector<std::__1::shared_ptr<jet_framebuffer>, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}^{shared_ptr<jet_framebuffer>}{__compressed_pair<std::__1::shared_ptr<jet_framebuffer> *, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}@}16, name: initWithSKCRenderer:
- (void)dealloc;
@property(nonatomic) BOOL ignoresSiblingOrder;

@end
